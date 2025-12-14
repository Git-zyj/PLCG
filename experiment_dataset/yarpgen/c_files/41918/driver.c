#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)59825;
unsigned char var_8 = (unsigned char)138;
unsigned char var_12 = (unsigned char)165;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)33124;
int zero = 0;
unsigned short var_17 = (unsigned short)6702;
int var_18 = 1915978045;
unsigned char var_19 = (unsigned char)195;
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
