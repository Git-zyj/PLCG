#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)135;
unsigned short var_5 = (unsigned short)61955;
long long int var_7 = -7047726900376995243LL;
long long int var_11 = 2230981452073210348LL;
int zero = 0;
unsigned int var_16 = 1972283488U;
unsigned short var_17 = (unsigned short)43776;
unsigned short var_18 = (unsigned short)17216;
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
