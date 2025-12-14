#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6638756716899452586LL;
unsigned int var_7 = 3221680402U;
unsigned int var_9 = 3180282535U;
long long int var_12 = 1988076614051594164LL;
long long int var_14 = 3737942985434336259LL;
int zero = 0;
long long int var_15 = 4972461574066964017LL;
long long int var_16 = 4661672443059660708LL;
void init() {
}

void checksum() {
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
