#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)248;
unsigned int var_5 = 2640799682U;
unsigned short var_6 = (unsigned short)866;
short var_9 = (short)11577;
short var_14 = (short)-1011;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 204467780562666434LL;
unsigned char var_17 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
