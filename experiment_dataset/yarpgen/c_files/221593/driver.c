#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47321;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 7293089975681839402ULL;
signed char var_9 = (signed char)-25;
unsigned int var_13 = 2810897000U;
signed char var_14 = (signed char)-93;
int zero = 0;
unsigned short var_16 = (unsigned short)14158;
short var_17 = (short)-4125;
unsigned short var_18 = (unsigned short)34863;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
