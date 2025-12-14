#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17437312530981064515ULL;
signed char var_2 = (signed char)87;
unsigned char var_3 = (unsigned char)221;
unsigned long long int var_4 = 6864124198077270971ULL;
int var_9 = -322887187;
unsigned char var_11 = (unsigned char)244;
unsigned long long int var_12 = 8752503437282135093ULL;
int zero = 0;
int var_15 = -1836963766;
unsigned char var_16 = (unsigned char)74;
unsigned char var_17 = (unsigned char)247;
short var_18 = (short)9037;
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
