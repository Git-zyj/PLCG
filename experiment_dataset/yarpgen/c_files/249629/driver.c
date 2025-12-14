#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2500;
unsigned long long int var_6 = 14078032446684467513ULL;
long long int var_9 = 6935067749083882270LL;
unsigned int var_11 = 2202348863U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 3100549491785745500ULL;
int var_17 = -1217378434;
int zero = 0;
unsigned long long int var_19 = 11798185188800397387ULL;
signed char var_20 = (signed char)-108;
int var_21 = 1170041775;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
