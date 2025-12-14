#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)70;
signed char var_3 = (signed char)-41;
int var_8 = -1678457882;
long long int var_9 = 3298940368166961079LL;
int var_10 = 1890758667;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -521438396;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
