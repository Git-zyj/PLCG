#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30165;
_Bool var_8 = (_Bool)1;
long long int var_11 = -841894278135887976LL;
unsigned short var_12 = (unsigned short)52058;
unsigned short var_13 = (unsigned short)15047;
unsigned char var_15 = (unsigned char)42;
int zero = 0;
long long int var_19 = 3105226574321452619LL;
long long int var_20 = 3289774820402956892LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
