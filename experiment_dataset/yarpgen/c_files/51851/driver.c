#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3119790077U;
unsigned char var_5 = (unsigned char)244;
long long int var_6 = 4042536306167518553LL;
unsigned int var_8 = 898287947U;
short var_10 = (short)-16211;
int zero = 0;
short var_13 = (short)-23522;
unsigned char var_14 = (unsigned char)87;
unsigned char var_15 = (unsigned char)125;
long long int var_16 = 5290804242557384666LL;
unsigned int var_17 = 1442941740U;
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
