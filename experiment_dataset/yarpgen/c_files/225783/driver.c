#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2140846985U;
unsigned int var_3 = 2328105860U;
unsigned int var_6 = 230559332U;
long long int var_15 = -4942465747602845787LL;
long long int var_18 = -6661373310275558372LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 3451144398481359313LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
