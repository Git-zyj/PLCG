#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)23;
unsigned long long int var_11 = 1499670258114766093ULL;
short var_16 = (short)8037;
int zero = 0;
int var_18 = -304143352;
short var_19 = (short)4384;
signed char var_20 = (signed char)-68;
void init() {
}

void checksum() {
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
