#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-97;
unsigned short var_3 = (unsigned short)17105;
int var_4 = -14590901;
int var_6 = -534978536;
int var_7 = -577165550;
unsigned char var_14 = (unsigned char)207;
int zero = 0;
int var_16 = 607417452;
int var_17 = -645761408;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
