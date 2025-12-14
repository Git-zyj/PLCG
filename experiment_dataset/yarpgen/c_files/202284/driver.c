#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-74;
long long int var_5 = -5551107970438600379LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)194;
unsigned char var_8 = (unsigned char)227;
unsigned short var_12 = (unsigned short)33308;
unsigned char var_13 = (unsigned char)221;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)143;
short var_16 = (short)-20102;
signed char var_17 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
