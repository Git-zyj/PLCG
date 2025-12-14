#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6415381365636252191LL;
unsigned int var_2 = 609070799U;
signed char var_3 = (signed char)18;
unsigned char var_4 = (unsigned char)184;
unsigned int var_8 = 40028600U;
unsigned int var_11 = 972417321U;
int zero = 0;
int var_12 = 658775656;
unsigned short var_13 = (unsigned short)23156;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
