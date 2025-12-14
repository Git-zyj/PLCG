#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)8;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)166;
signed char var_3 = (signed char)2;
long long int var_4 = -4884206081335526510LL;
signed char var_5 = (signed char)53;
unsigned char var_6 = (unsigned char)12;
_Bool var_7 = (_Bool)0;
long long int var_8 = 1309291899500100963LL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)198;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)1;
unsigned long long int var_15 = 14110477693472357620ULL;
unsigned char var_16 = (unsigned char)243;
int zero = 0;
unsigned char var_17 = (unsigned char)24;
short var_18 = (short)9763;
signed char var_19 = (signed char)-38;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
