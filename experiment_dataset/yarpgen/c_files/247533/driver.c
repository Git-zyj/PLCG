#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)89;
unsigned short var_12 = (unsigned short)62543;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1177338692U;
int zero = 0;
unsigned int var_20 = 147048822U;
unsigned short var_21 = (unsigned short)52799;
unsigned int var_22 = 1815304258U;
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
