#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57206;
unsigned int var_7 = 3872715179U;
int var_14 = -421838366;
int zero = 0;
unsigned long long int var_16 = 1893929695793046232ULL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)54155;
unsigned long long int var_19 = 4354226678674349276ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
