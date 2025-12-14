#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2212588783869901374LL;
unsigned int var_4 = 3644533349U;
unsigned short var_6 = (unsigned short)27083;
_Bool var_7 = (_Bool)1;
int var_11 = 699301375;
short var_15 = (short)28746;
int zero = 0;
unsigned short var_18 = (unsigned short)55197;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
