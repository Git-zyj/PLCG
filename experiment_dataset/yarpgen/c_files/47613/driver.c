#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1900515223U;
int var_4 = 1497399426;
unsigned int var_5 = 3291224017U;
_Bool var_6 = (_Bool)1;
int var_7 = -1228726430;
unsigned char var_8 = (unsigned char)246;
long long int var_13 = -4234003101375680883LL;
long long int var_14 = 6399138933839658096LL;
int var_15 = -359861545;
unsigned long long int var_18 = 16825017200629426405ULL;
int zero = 0;
short var_19 = (short)4763;
unsigned int var_20 = 1100925805U;
long long int var_21 = -5756593799266035679LL;
int var_22 = -2043642552;
unsigned long long int var_23 = 8483533982310626489ULL;
void init() {
}

void checksum() {
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
