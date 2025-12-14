#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = 2616124638113480071LL;
int var_10 = 977683095;
int zero = 0;
long long int var_12 = -3245775329564523155LL;
long long int var_13 = 1218993294705103556LL;
long long int var_14 = -14463141234332265LL;
short var_15 = (short)4733;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
