#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)61;
unsigned int var_2 = 662675849U;
unsigned char var_3 = (unsigned char)46;
signed char var_4 = (signed char)89;
_Bool var_5 = (_Bool)1;
int var_6 = 1397263740;
unsigned short var_8 = (unsigned short)20275;
unsigned long long int var_10 = 13836540042994462214ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)243;
unsigned int var_14 = 3919321597U;
unsigned int var_15 = 135837520U;
void init() {
}

void checksum() {
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
