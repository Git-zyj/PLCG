#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52966;
long long int var_2 = -2876682253411844009LL;
signed char var_4 = (signed char)-59;
unsigned int var_6 = 1811909453U;
long long int var_7 = 5460430621565536027LL;
signed char var_8 = (signed char)10;
int zero = 0;
unsigned long long int var_10 = 7392599857434019993ULL;
unsigned char var_11 = (unsigned char)203;
_Bool var_12 = (_Bool)1;
int var_13 = -1855118613;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
