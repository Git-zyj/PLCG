#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6366645848894587598ULL;
short var_1 = (short)23678;
signed char var_2 = (signed char)38;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
short var_13 = (short)4557;
_Bool var_14 = (_Bool)0;
unsigned long long int var_16 = 1340291379297588025ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)141;
_Bool var_19 = (_Bool)1;
long long int var_20 = -3236801589892873075LL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 245661833U;
unsigned char var_23 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
