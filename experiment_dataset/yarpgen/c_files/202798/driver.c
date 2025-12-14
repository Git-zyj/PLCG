#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_12 = (unsigned char)250;
unsigned short var_14 = (unsigned short)43799;
unsigned short var_17 = (unsigned short)7963;
long long int var_18 = 902126495903541415LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3048410334U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
