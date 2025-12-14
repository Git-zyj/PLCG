#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8125;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)52;
unsigned char var_7 = (unsigned char)217;
int zero = 0;
long long int var_16 = 6231065251020038747LL;
int var_17 = 325694132;
_Bool var_18 = (_Bool)0;
long long int var_19 = 1230639631211043626LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
