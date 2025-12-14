#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)73;
unsigned short var_4 = (unsigned short)29601;
unsigned short var_5 = (unsigned short)12931;
_Bool var_8 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 7767673164704894004ULL;
unsigned long long int var_18 = 15316045165514495476ULL;
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
