#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23325;
unsigned short var_1 = (unsigned short)47730;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)144;
short var_7 = (short)22994;
unsigned int var_8 = 3140198584U;
int zero = 0;
unsigned char var_10 = (unsigned char)52;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)7448;
_Bool var_13 = (_Bool)0;
short var_14 = (short)9321;
short var_15 = (short)-1851;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
