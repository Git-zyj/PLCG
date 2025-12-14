#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-25511;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)46601;
signed char var_14 = (signed char)88;
unsigned char var_15 = (unsigned char)246;
int var_16 = 533442980;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 1213575514;
long long int var_19 = -6458908914363724208LL;
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
