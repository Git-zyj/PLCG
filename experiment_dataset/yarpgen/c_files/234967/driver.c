#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)44;
unsigned short var_2 = (unsigned short)766;
unsigned char var_3 = (unsigned char)15;
signed char var_8 = (signed char)-20;
int var_9 = 1285498874;
unsigned short var_11 = (unsigned short)53951;
signed char var_12 = (signed char)75;
int var_14 = -716406234;
int zero = 0;
unsigned short var_15 = (unsigned short)47997;
short var_16 = (short)-25086;
signed char var_17 = (signed char)123;
void init() {
}

void checksum() {
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
