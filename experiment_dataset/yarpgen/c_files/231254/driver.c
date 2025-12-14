#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
unsigned short var_1 = (unsigned short)2543;
signed char var_2 = (signed char)-72;
unsigned long long int var_4 = 12653818823449151894ULL;
unsigned short var_7 = (unsigned short)33548;
int zero = 0;
unsigned long long int var_10 = 1404339191991743660ULL;
unsigned short var_11 = (unsigned short)29958;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 18420708779165043985ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
