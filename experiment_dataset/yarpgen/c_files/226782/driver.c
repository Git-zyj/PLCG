#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
short var_6 = (short)-7592;
unsigned int var_7 = 1664206130U;
unsigned char var_8 = (unsigned char)161;
int var_10 = 2141055025;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -113479108868827080LL;
long long int var_13 = -7228702765089399696LL;
unsigned int var_14 = 2698788181U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
