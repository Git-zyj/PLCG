#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 53045656U;
int var_3 = 1364930645;
long long int var_8 = 4044370571180509915LL;
int zero = 0;
long long int var_13 = 9002922953874652923LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = -8746601406381825514LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
