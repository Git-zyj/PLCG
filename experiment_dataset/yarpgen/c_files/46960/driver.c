#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 759650132;
unsigned long long int var_8 = 9349077146384094083ULL;
unsigned char var_10 = (unsigned char)10;
_Bool var_11 = (_Bool)1;
unsigned int var_16 = 1447945050U;
signed char var_18 = (signed char)29;
int zero = 0;
unsigned char var_19 = (unsigned char)182;
short var_20 = (short)-14206;
void init() {
}

void checksum() {
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
