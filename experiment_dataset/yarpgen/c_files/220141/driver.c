#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2316640828219678558LL;
short var_1 = (short)-19953;
long long int var_3 = -8206403496293954665LL;
unsigned char var_5 = (unsigned char)234;
signed char var_6 = (signed char)42;
short var_9 = (short)28914;
int zero = 0;
unsigned short var_13 = (unsigned short)31993;
signed char var_14 = (signed char)70;
void init() {
}

void checksum() {
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
