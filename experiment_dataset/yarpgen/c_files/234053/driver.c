#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10676416792740222416ULL;
short var_1 = (short)18450;
unsigned long long int var_10 = 9609643292279377519ULL;
unsigned long long int var_15 = 17389924631488899961ULL;
int zero = 0;
short var_16 = (short)-14209;
unsigned char var_17 = (unsigned char)83;
void init() {
}

void checksum() {
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
