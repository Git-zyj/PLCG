#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61617;
unsigned short var_2 = (unsigned short)58972;
int var_3 = -1173205299;
unsigned short var_4 = (unsigned short)51500;
unsigned short var_6 = (unsigned short)18675;
long long int var_8 = -6015800356631184199LL;
int zero = 0;
int var_14 = 430019272;
unsigned int var_15 = 2262833642U;
signed char var_16 = (signed char)24;
void init() {
}

void checksum() {
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
