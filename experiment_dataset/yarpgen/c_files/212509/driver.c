#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5492391932228144230LL;
unsigned long long int var_2 = 16629076578125533534ULL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)84;
short var_5 = (short)-23692;
signed char var_6 = (signed char)-71;
unsigned char var_7 = (unsigned char)115;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)19717;
unsigned char var_12 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
