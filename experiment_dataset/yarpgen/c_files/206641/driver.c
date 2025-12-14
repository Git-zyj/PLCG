#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1743427253;
signed char var_3 = (signed char)72;
short var_5 = (short)11574;
signed char var_13 = (signed char)-86;
int zero = 0;
unsigned char var_18 = (unsigned char)99;
short var_19 = (short)-13875;
int var_20 = -1392974834;
signed char var_21 = (signed char)-89;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
