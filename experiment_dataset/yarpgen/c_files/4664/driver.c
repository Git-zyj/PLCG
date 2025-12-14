#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4508036449662577669LL;
short var_6 = (short)-3056;
signed char var_15 = (signed char)-6;
unsigned int var_16 = 2158828717U;
unsigned char var_17 = (unsigned char)187;
unsigned char var_18 = (unsigned char)41;
int zero = 0;
signed char var_20 = (signed char)-24;
unsigned long long int var_21 = 2724474981902976819ULL;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
