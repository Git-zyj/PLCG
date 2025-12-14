#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1919611610U;
unsigned char var_1 = (unsigned char)25;
unsigned long long int var_3 = 15869677029028528583ULL;
unsigned char var_4 = (unsigned char)119;
signed char var_5 = (signed char)88;
short var_6 = (short)23114;
unsigned int var_7 = 1671440534U;
unsigned char var_8 = (unsigned char)114;
unsigned char var_9 = (unsigned char)222;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = 1331901344208288176LL;
unsigned char var_12 = (unsigned char)205;
short var_13 = (short)-12314;
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
