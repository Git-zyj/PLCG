#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9530421899402941362ULL;
long long int var_6 = 532904785406095813LL;
signed char var_7 = (signed char)76;
_Bool var_8 = (_Bool)1;
long long int var_13 = -1424639463740616676LL;
unsigned char var_15 = (unsigned char)56;
int zero = 0;
long long int var_17 = 8743359470541848148LL;
unsigned char var_18 = (unsigned char)143;
unsigned int var_19 = 971527734U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
