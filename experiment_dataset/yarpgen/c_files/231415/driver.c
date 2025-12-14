#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4419638635184380326ULL;
unsigned short var_10 = (unsigned short)47364;
unsigned long long int var_11 = 1244286095754390371ULL;
unsigned long long int var_12 = 2647741013639348418ULL;
unsigned short var_14 = (unsigned short)56391;
int zero = 0;
unsigned short var_15 = (unsigned short)8547;
unsigned long long int var_16 = 1151966111753030244ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
