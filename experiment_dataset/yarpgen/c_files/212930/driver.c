#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 475439004;
unsigned long long int var_4 = 1396422220405016234ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)54167;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_13 = 4445678626276282710LL;
long long int var_14 = 7476347692542598442LL;
short var_15 = (short)5683;
unsigned long long int var_16 = 2279301537206595210ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
