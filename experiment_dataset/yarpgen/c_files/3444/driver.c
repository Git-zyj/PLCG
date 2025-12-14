#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 183346069;
unsigned short var_7 = (unsigned short)18876;
long long int var_11 = 6838706868520683617LL;
unsigned int var_12 = 972114497U;
unsigned short var_13 = (unsigned short)25376;
unsigned char var_18 = (unsigned char)140;
int zero = 0;
unsigned short var_20 = (unsigned short)13146;
unsigned int var_21 = 4267351977U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
