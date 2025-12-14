#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10022881240032003732ULL;
int var_4 = -763464374;
unsigned char var_7 = (unsigned char)221;
int var_10 = 2111062610;
int zero = 0;
unsigned int var_13 = 1045691188U;
unsigned int var_14 = 2194858706U;
unsigned char var_15 = (unsigned char)224;
unsigned char var_16 = (unsigned char)101;
unsigned long long int var_17 = 13773857254981751449ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
