#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3926193309980236853ULL;
unsigned char var_8 = (unsigned char)1;
_Bool var_12 = (_Bool)1;
long long int var_17 = 809016903726418521LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 362417138U;
long long int var_21 = -5459575351123306204LL;
unsigned int var_22 = 1004966222U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
