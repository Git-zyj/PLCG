#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44286;
signed char var_1 = (signed char)-15;
unsigned long long int var_3 = 14698640456196551438ULL;
unsigned short var_4 = (unsigned short)57395;
signed char var_6 = (signed char)-16;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 5424689176017256881ULL;
long long int var_13 = 2168664949410581764LL;
unsigned long long int var_14 = 577370190432402022ULL;
long long int var_16 = -4914220427215021167LL;
int zero = 0;
signed char var_17 = (signed char)48;
unsigned long long int var_18 = 9041991218281988574ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
