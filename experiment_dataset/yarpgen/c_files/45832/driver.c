#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-83;
short var_4 = (short)-4393;
short var_7 = (short)10229;
short var_9 = (short)-7606;
unsigned short var_11 = (unsigned short)26013;
unsigned char var_13 = (unsigned char)68;
int zero = 0;
int var_14 = -786777035;
unsigned short var_15 = (unsigned short)44223;
int var_16 = -1865055962;
signed char var_17 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
