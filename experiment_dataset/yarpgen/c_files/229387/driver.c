#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
unsigned long long int var_1 = 9804849580189054100ULL;
unsigned char var_11 = (unsigned char)194;
unsigned short var_13 = (unsigned short)34427;
int zero = 0;
long long int var_16 = -1828718318059234774LL;
short var_17 = (short)-18527;
unsigned short var_18 = (unsigned short)16110;
void init() {
}

void checksum() {
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
