#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)32;
long long int var_3 = 6594951810916640345LL;
long long int var_6 = 6632287492141068369LL;
_Bool var_7 = (_Bool)0;
signed char var_11 = (signed char)-124;
int var_13 = -688911681;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)24;
unsigned char var_16 = (unsigned char)211;
unsigned char var_18 = (unsigned char)132;
int zero = 0;
unsigned int var_19 = 2700078839U;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)62;
long long int var_22 = -7825012072153139528LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
