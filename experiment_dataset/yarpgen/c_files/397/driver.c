#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
signed char var_1 = (signed char)59;
unsigned int var_7 = 532172180U;
unsigned long long int var_10 = 5650102252110951780ULL;
unsigned char var_11 = (unsigned char)96;
long long int var_14 = 5188822373103066447LL;
signed char var_16 = (signed char)76;
unsigned short var_19 = (unsigned short)32683;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)60127;
signed char var_22 = (signed char)2;
unsigned int var_23 = 3075939349U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
