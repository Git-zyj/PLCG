#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5827727958748514494LL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1783932248U;
long long int var_7 = -5308323755649173873LL;
unsigned int var_13 = 1231175192U;
int zero = 0;
unsigned short var_14 = (unsigned short)54266;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-94;
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
