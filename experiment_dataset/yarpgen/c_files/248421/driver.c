#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)35;
_Bool var_3 = (_Bool)0;
unsigned int var_7 = 1750206652U;
long long int var_9 = 5066713831302018320LL;
unsigned long long int var_16 = 356265542545331398ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 2115303338;
long long int var_20 = -1433351414514117337LL;
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
