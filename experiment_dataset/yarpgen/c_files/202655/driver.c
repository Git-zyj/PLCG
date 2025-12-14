#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5918015828562405407ULL;
unsigned short var_2 = (unsigned short)57192;
unsigned short var_7 = (unsigned short)32369;
unsigned char var_10 = (unsigned char)87;
short var_11 = (short)-28759;
int zero = 0;
signed char var_12 = (signed char)66;
unsigned short var_13 = (unsigned short)23047;
long long int var_14 = -4712071548532650734LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
