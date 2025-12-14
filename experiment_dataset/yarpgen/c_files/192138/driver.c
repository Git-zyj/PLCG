#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2823182372U;
unsigned short var_4 = (unsigned short)46882;
unsigned char var_5 = (unsigned char)90;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int var_19 = 1312676858;
int zero = 0;
long long int var_20 = 3617148664560567287LL;
unsigned int var_21 = 1157657603U;
void init() {
}

void checksum() {
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
