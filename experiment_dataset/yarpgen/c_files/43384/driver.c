#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1496098407U;
long long int var_12 = -618654851423582099LL;
int zero = 0;
signed char var_15 = (signed char)-12;
unsigned long long int var_16 = 4380777642859606526ULL;
unsigned char var_17 = (unsigned char)249;
unsigned int var_18 = 3479246263U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
