#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7351534305637603134LL;
unsigned short var_7 = (unsigned short)35763;
unsigned int var_8 = 608846684U;
int var_10 = -571813211;
signed char var_14 = (signed char)124;
_Bool var_16 = (_Bool)1;
signed char var_18 = (signed char)-1;
int zero = 0;
signed char var_20 = (signed char)9;
unsigned short var_21 = (unsigned short)7726;
unsigned int var_22 = 3901599659U;
void init() {
}

void checksum() {
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
