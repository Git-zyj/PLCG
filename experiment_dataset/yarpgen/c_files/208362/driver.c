#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1881065595785993996LL;
signed char var_2 = (signed char)50;
unsigned long long int var_6 = 14414503237667534875ULL;
int var_9 = 652456477;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)236;
int zero = 0;
int var_18 = 813624076;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
