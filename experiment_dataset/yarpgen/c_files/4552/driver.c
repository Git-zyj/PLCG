#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1338697883920712893ULL;
short var_2 = (short)22868;
unsigned char var_3 = (unsigned char)91;
unsigned short var_7 = (unsigned short)55768;
long long int var_15 = -6870305511645548293LL;
int zero = 0;
unsigned short var_17 = (unsigned short)4609;
unsigned char var_18 = (unsigned char)162;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 78181993U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
