#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1893695761;
long long int var_4 = -8947465767471956752LL;
signed char var_8 = (signed char)-85;
short var_15 = (short)-14837;
int zero = 0;
unsigned char var_17 = (unsigned char)51;
unsigned long long int var_18 = 6769482097252155287ULL;
unsigned int var_19 = 3144563190U;
unsigned char var_20 = (unsigned char)119;
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
