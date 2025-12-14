#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)2;
signed char var_4 = (signed char)-84;
unsigned long long int var_7 = 3360794035413578074ULL;
unsigned int var_8 = 3890381338U;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 469804593U;
long long int var_12 = 3591587170028766764LL;
void init() {
}

void checksum() {
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
