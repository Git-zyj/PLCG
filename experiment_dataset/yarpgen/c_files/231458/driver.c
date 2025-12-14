#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1126813881U;
unsigned char var_3 = (unsigned char)89;
unsigned long long int var_5 = 11636587680622659395ULL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)85;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -666040910;
unsigned char var_16 = (unsigned char)250;
void init() {
}

void checksum() {
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
