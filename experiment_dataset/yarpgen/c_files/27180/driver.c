#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
short var_8 = (short)23498;
unsigned short var_9 = (unsigned short)60303;
int zero = 0;
signed char var_11 = (signed char)0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)42822;
int var_14 = 1586292942;
unsigned int var_15 = 1317256747U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
