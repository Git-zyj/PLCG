#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)166;
unsigned char var_4 = (unsigned char)190;
long long int var_6 = 8062629677147306389LL;
unsigned long long int var_8 = 12050351153278219212ULL;
unsigned int var_10 = 67896951U;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 8822507916770635962ULL;
_Bool var_14 = (_Bool)0;
_Bool var_16 = (_Bool)1;
signed char var_18 = (signed char)-65;
int zero = 0;
unsigned long long int var_19 = 13002344357753426211ULL;
signed char var_20 = (signed char)-47;
unsigned long long int var_21 = 12675729143674629441ULL;
unsigned int var_22 = 2689099463U;
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
