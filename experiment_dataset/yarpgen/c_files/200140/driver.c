#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1237867230;
unsigned int var_1 = 4212449938U;
long long int var_2 = 1947552205282186649LL;
short var_4 = (short)-7258;
signed char var_5 = (signed char)-19;
unsigned char var_6 = (unsigned char)76;
unsigned int var_8 = 746045952U;
int zero = 0;
unsigned short var_10 = (unsigned short)13309;
signed char var_11 = (signed char)-63;
long long int var_12 = -1174385347467511739LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
