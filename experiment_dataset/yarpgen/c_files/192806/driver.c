#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 436728663U;
short var_3 = (short)29724;
int var_5 = 1629154176;
unsigned short var_6 = (unsigned short)28921;
signed char var_10 = (signed char)53;
int zero = 0;
unsigned long long int var_12 = 11419797159185260513ULL;
unsigned int var_13 = 2409852755U;
int var_14 = 1307898808;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
