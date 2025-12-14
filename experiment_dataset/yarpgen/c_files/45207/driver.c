#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7953745847144413475ULL;
int var_9 = -939785634;
long long int var_12 = -9160299021730302823LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_20 = (short)-27394;
unsigned int var_21 = 3222484040U;
short var_22 = (short)-2;
long long int var_23 = -614193700791664044LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
