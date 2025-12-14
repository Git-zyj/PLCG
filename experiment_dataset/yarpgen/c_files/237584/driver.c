#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
unsigned long long int var_2 = 8962175460940165472ULL;
_Bool var_3 = (_Bool)1;
short var_6 = (short)-6069;
unsigned char var_7 = (unsigned char)160;
int var_9 = 685104203;
int zero = 0;
unsigned char var_11 = (unsigned char)201;
unsigned long long int var_12 = 4473315948743075479ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
