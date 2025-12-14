#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 642397732U;
_Bool var_2 = (_Bool)1;
long long int var_4 = 140539066976125268LL;
unsigned long long int var_7 = 16760330832872612088ULL;
unsigned char var_8 = (unsigned char)23;
unsigned char var_10 = (unsigned char)55;
int var_14 = 1184612356;
signed char var_16 = (signed char)-89;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2800931647U;
int zero = 0;
unsigned char var_19 = (unsigned char)246;
int var_20 = -1900857878;
unsigned short var_21 = (unsigned short)32657;
unsigned short var_22 = (unsigned short)33811;
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
