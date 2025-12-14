#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6735072809002842798LL;
_Bool var_5 = (_Bool)0;
int var_12 = -1001827320;
int zero = 0;
unsigned int var_17 = 3274312363U;
unsigned long long int var_18 = 6602657390646391352ULL;
unsigned long long int var_19 = 3151723857733589174ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
