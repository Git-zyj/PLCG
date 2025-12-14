#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)226;
int var_7 = -2028125165;
long long int var_8 = -2083585886607282419LL;
unsigned int var_12 = 2952576640U;
int zero = 0;
long long int var_13 = -7715488264822276275LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -629853873965283392LL;
void init() {
}

void checksum() {
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
