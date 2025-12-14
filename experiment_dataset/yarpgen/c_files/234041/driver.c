#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16143783077581062955ULL;
unsigned long long int var_3 = 6917997405887267482ULL;
signed char var_5 = (signed char)-127;
short var_8 = (short)30758;
unsigned char var_10 = (unsigned char)170;
unsigned long long int var_12 = 15896433917977874469ULL;
int var_16 = 994377900;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)45;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 6201732145140254335ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
