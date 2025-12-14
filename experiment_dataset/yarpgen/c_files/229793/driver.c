#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)18;
unsigned char var_7 = (unsigned char)1;
unsigned short var_14 = (unsigned short)56084;
unsigned long long int var_16 = 8312766790004391908ULL;
long long int var_17 = 7225953961653170148LL;
int zero = 0;
short var_20 = (short)-32602;
unsigned char var_21 = (unsigned char)237;
long long int var_22 = 7745654279743855802LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
