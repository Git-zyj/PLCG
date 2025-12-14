#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)166;
int var_4 = -1181879157;
signed char var_11 = (signed char)-65;
int var_14 = 1373045023;
int zero = 0;
short var_17 = (short)-20462;
unsigned int var_18 = 3873423454U;
short var_19 = (short)-5983;
int var_20 = 659826976;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
