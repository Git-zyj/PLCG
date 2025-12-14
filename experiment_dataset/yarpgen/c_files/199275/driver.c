#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 803302840U;
long long int var_3 = 62965607698854582LL;
long long int var_7 = -2256014758441320815LL;
long long int var_9 = 8059755045236215874LL;
signed char var_10 = (signed char)75;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)4;
int zero = 0;
long long int var_16 = 9045891556841060100LL;
int var_17 = -417164890;
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
