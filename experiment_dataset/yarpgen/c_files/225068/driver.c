#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2428091025346345971ULL;
unsigned long long int var_1 = 16607608652438735067ULL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)40409;
unsigned long long int var_7 = 9903979877226913234ULL;
long long int var_8 = 1638881360935771292LL;
unsigned int var_10 = 3705658183U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 11180580310153345408ULL;
int var_17 = -1595737037;
void init() {
}

void checksum() {
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
