#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7226568588377151323LL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2901498337U;
unsigned int var_7 = 1109535931U;
long long int var_9 = -3381748672043170418LL;
int zero = 0;
int var_10 = 497745821;
unsigned int var_11 = 1320178672U;
unsigned long long int var_12 = 16691350504064455193ULL;
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
