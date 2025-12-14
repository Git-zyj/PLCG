#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -5057310276995096457LL;
_Bool var_9 = (_Bool)1;
int var_12 = 1256599393;
unsigned int var_15 = 2246486632U;
int zero = 0;
unsigned short var_17 = (unsigned short)55677;
long long int var_18 = 5081429428250426473LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
