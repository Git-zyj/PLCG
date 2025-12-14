#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3429325068043654390ULL;
_Bool var_6 = (_Bool)1;
signed char var_14 = (signed char)33;
int zero = 0;
unsigned char var_16 = (unsigned char)10;
signed char var_17 = (signed char)26;
unsigned short var_18 = (unsigned short)23668;
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
