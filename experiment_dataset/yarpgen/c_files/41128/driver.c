#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21926;
long long int var_3 = -3983122092474086773LL;
unsigned long long int var_10 = 933810936957611788ULL;
short var_11 = (short)-32159;
int var_12 = -778945193;
unsigned char var_17 = (unsigned char)97;
int var_18 = -677205840;
int zero = 0;
unsigned short var_20 = (unsigned short)392;
long long int var_21 = 8576179966813212679LL;
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
