#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2936160341106879523ULL;
unsigned long long int var_1 = 12154494278964674812ULL;
unsigned long long int var_2 = 129482442472835269ULL;
short var_4 = (short)-12079;
unsigned long long int var_6 = 14493599975861878556ULL;
unsigned char var_8 = (unsigned char)57;
signed char var_10 = (signed char)67;
short var_11 = (short)-14467;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 5945570143738410203ULL;
unsigned int var_15 = 2723278265U;
unsigned char var_16 = (unsigned char)74;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
