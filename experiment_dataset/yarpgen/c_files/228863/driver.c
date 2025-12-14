#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1301;
short var_1 = (short)-2044;
unsigned long long int var_7 = 10850597486546906484ULL;
long long int var_10 = 127014162165056480LL;
unsigned char var_11 = (unsigned char)21;
signed char var_12 = (signed char)-51;
signed char var_13 = (signed char)-82;
int zero = 0;
unsigned char var_14 = (unsigned char)82;
unsigned short var_15 = (unsigned short)48971;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
