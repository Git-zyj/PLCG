#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3692498006U;
unsigned long long int var_1 = 10030431829082177262ULL;
int var_3 = -1948377592;
unsigned char var_4 = (unsigned char)60;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-92;
signed char var_8 = (signed char)-18;
int var_10 = 1611366537;
int zero = 0;
int var_11 = -702897928;
int var_12 = 1740472657;
unsigned short var_13 = (unsigned short)25293;
unsigned long long int var_14 = 16314159128841039617ULL;
long long int var_15 = 8841924221851848783LL;
void init() {
}

void checksum() {
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
