#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2771560331913483495LL;
unsigned long long int var_6 = 6011554901914960977ULL;
unsigned long long int var_7 = 14678808867338797363ULL;
unsigned long long int var_12 = 14095809817304807121ULL;
int var_15 = 922750344;
int zero = 0;
signed char var_18 = (signed char)74;
long long int var_19 = 4744938245235142257LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
