#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1927157213U;
int var_1 = -1428279866;
unsigned int var_8 = 1157732236U;
int zero = 0;
int var_18 = -1014624862;
short var_19 = (short)24426;
unsigned char var_20 = (unsigned char)102;
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
