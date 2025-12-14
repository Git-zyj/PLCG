#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)151;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)60619;
int var_11 = -1313236925;
long long int var_12 = 511876894936971466LL;
unsigned short var_14 = (unsigned short)32754;
unsigned long long int var_16 = 188169210350560224ULL;
int zero = 0;
unsigned int var_19 = 1877415895U;
unsigned long long int var_20 = 4439475307380601003ULL;
unsigned char var_21 = (unsigned char)84;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
