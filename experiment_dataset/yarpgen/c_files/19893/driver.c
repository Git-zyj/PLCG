#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14035379069744963248ULL;
unsigned long long int var_3 = 4281233494283451692ULL;
unsigned long long int var_5 = 14467016199498969578ULL;
unsigned short var_8 = (unsigned short)22054;
unsigned char var_13 = (unsigned char)178;
_Bool var_15 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)141;
unsigned short var_21 = (unsigned short)3314;
unsigned long long int var_22 = 15266219643830644441ULL;
_Bool var_23 = (_Bool)1;
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
