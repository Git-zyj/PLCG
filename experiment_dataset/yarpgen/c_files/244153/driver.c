#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9364121455331616795ULL;
unsigned int var_1 = 1812569170U;
unsigned char var_2 = (unsigned char)134;
unsigned long long int var_3 = 8403346828841042096ULL;
unsigned long long int var_10 = 10442389534412950634ULL;
signed char var_13 = (signed char)3;
unsigned long long int var_14 = 6228260240425513985ULL;
unsigned int var_15 = 1607890272U;
unsigned int var_17 = 161499033U;
int zero = 0;
int var_18 = -1620563298;
_Bool var_19 = (_Bool)1;
int var_20 = 529748571;
unsigned short var_21 = (unsigned short)9378;
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
