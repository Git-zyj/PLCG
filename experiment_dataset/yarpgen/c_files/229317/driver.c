#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 445885584U;
int var_2 = 963930489;
unsigned long long int var_4 = 1923843762141618099ULL;
unsigned long long int var_5 = 16307904450500175799ULL;
unsigned char var_6 = (unsigned char)115;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2351898309U;
unsigned short var_20 = (unsigned short)2409;
long long int var_21 = -4437939290787560457LL;
unsigned int var_22 = 1313320743U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
