#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42921;
signed char var_3 = (signed char)-47;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)98;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)0;
long long int var_13 = 3880023131182158744LL;
int zero = 0;
signed char var_16 = (signed char)52;
long long int var_17 = -8299396127511628096LL;
unsigned char var_18 = (unsigned char)174;
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
