#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46207;
unsigned int var_1 = 3810936130U;
unsigned short var_3 = (unsigned short)6595;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 651982063U;
unsigned char var_11 = (unsigned char)147;
unsigned int var_12 = 390560294U;
signed char var_14 = (signed char)112;
unsigned long long int var_19 = 6666358893302641273ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2216567126U;
unsigned int var_22 = 2330514928U;
unsigned int var_23 = 980661255U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
