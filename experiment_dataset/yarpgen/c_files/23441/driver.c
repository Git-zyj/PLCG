#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 156652311;
unsigned short var_3 = (unsigned short)45431;
unsigned short var_5 = (unsigned short)2686;
long long int var_9 = -392021278404667012LL;
short var_14 = (short)-25598;
unsigned char var_16 = (unsigned char)184;
int zero = 0;
unsigned int var_18 = 953684845U;
unsigned short var_19 = (unsigned short)11423;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
