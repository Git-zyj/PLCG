#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3970440182U;
unsigned char var_13 = (unsigned char)165;
unsigned char var_17 = (unsigned char)46;
signed char var_18 = (signed char)-85;
unsigned char var_19 = (unsigned char)194;
int zero = 0;
unsigned int var_20 = 2597643062U;
signed char var_21 = (signed char)-101;
long long int var_22 = -1680602773442779447LL;
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
