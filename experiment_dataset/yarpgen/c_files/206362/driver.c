#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15634578688514008687ULL;
long long int var_3 = 2518030654266707351LL;
unsigned long long int var_8 = 7467384948159883746ULL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 4188001764U;
unsigned char var_14 = (unsigned char)36;
long long int var_15 = 5421679350048989032LL;
unsigned long long int var_16 = 571221747547510033ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
