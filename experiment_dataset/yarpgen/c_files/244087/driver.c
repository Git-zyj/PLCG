#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13489590377558308827ULL;
unsigned long long int var_3 = 16530846146044103066ULL;
unsigned long long int var_4 = 11090752984211864491ULL;
unsigned long long int var_11 = 12004738422729589621ULL;
unsigned long long int var_12 = 4419317561368273655ULL;
int zero = 0;
unsigned long long int var_17 = 2595810758296255796ULL;
unsigned long long int var_18 = 6303777544958929327ULL;
unsigned long long int var_19 = 13697919287431158261ULL;
unsigned long long int var_20 = 16212881079830945995ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
