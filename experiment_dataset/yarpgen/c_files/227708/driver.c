#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1040042655U;
int var_4 = -1111602204;
unsigned long long int var_12 = 6564150170320163027ULL;
int var_14 = -926858526;
int zero = 0;
long long int var_16 = 7947921419675382793LL;
long long int var_17 = -3542217556600916052LL;
signed char var_18 = (signed char)15;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
