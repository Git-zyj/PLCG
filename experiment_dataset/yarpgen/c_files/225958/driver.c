#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28368;
long long int var_3 = 8885611044810936960LL;
long long int var_6 = -2179813119207640326LL;
unsigned short var_7 = (unsigned short)10538;
long long int var_10 = 5949517529630521966LL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 5554283700854531092ULL;
unsigned short var_13 = (unsigned short)49877;
unsigned int var_15 = 757718147U;
unsigned char var_17 = (unsigned char)237;
int zero = 0;
int var_18 = 357539417;
signed char var_19 = (signed char)-112;
unsigned short var_20 = (unsigned short)50557;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
