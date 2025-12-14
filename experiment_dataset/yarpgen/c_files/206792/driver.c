#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31983;
unsigned char var_2 = (unsigned char)106;
short var_4 = (short)31540;
int var_6 = -1633957149;
unsigned short var_8 = (unsigned short)54594;
int zero = 0;
signed char var_11 = (signed char)-118;
unsigned char var_12 = (unsigned char)139;
signed char var_13 = (signed char)-106;
unsigned char var_14 = (unsigned char)179;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
