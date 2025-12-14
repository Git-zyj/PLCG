#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)24812;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 4691983739987981086ULL;
long long int var_8 = -3389510251844946984LL;
unsigned char var_10 = (unsigned char)69;
unsigned char var_11 = (unsigned char)51;
int zero = 0;
short var_13 = (short)11918;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 258951226U;
unsigned short var_16 = (unsigned short)29163;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
