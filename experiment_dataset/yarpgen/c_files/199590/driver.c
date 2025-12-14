#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)144;
long long int var_4 = 5072871170688116053LL;
unsigned long long int var_6 = 13241167068401603021ULL;
unsigned char var_7 = (unsigned char)202;
unsigned int var_8 = 345223110U;
unsigned char var_9 = (unsigned char)65;
unsigned char var_10 = (unsigned char)19;
int zero = 0;
int var_11 = 1038338426;
short var_12 = (short)19683;
_Bool var_13 = (_Bool)1;
int var_14 = -2008465848;
int var_15 = -882125815;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
