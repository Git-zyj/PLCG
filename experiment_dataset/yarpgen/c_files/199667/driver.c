#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3564538552U;
unsigned long long int var_1 = 14034458283065381739ULL;
unsigned short var_3 = (unsigned short)48824;
unsigned long long int var_4 = 18198353535959837760ULL;
unsigned short var_6 = (unsigned short)23343;
unsigned short var_7 = (unsigned short)4499;
int var_8 = -1598010093;
int zero = 0;
int var_10 = 745423152;
int var_11 = -1479778526;
unsigned int var_12 = 3993519406U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
