#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13348924234979858413ULL;
long long int var_5 = -938751588723008153LL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3757300261U;
int zero = 0;
unsigned int var_10 = 2625570767U;
unsigned int var_11 = 2820208985U;
int var_12 = -501940762;
unsigned int var_13 = 3747786314U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
