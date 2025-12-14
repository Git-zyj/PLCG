#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_4 = -1046822106;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)63140;
long long int var_12 = -387477677774697497LL;
_Bool var_14 = (_Bool)1;
signed char var_17 = (signed char)106;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)5;
unsigned char var_20 = (unsigned char)145;
long long int var_21 = -6925622450063141249LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
