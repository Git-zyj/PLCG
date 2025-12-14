#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26512;
_Bool var_6 = (_Bool)0;
unsigned short var_12 = (unsigned short)56771;
int zero = 0;
unsigned short var_16 = (unsigned short)50148;
unsigned long long int var_17 = 1171416159742728202ULL;
unsigned long long int var_18 = 2800665999994913965ULL;
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
