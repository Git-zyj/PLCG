#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12681035985963094611ULL;
unsigned short var_2 = (unsigned short)60738;
unsigned long long int var_4 = 1831298609518218851ULL;
signed char var_7 = (signed char)23;
unsigned long long int var_9 = 3646293358715294518ULL;
int var_10 = -542407836;
unsigned char var_12 = (unsigned char)182;
int zero = 0;
signed char var_15 = (signed char)1;
unsigned long long int var_16 = 12179308830173734970ULL;
unsigned long long int var_17 = 434405797988351689ULL;
int var_18 = 1796063259;
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
