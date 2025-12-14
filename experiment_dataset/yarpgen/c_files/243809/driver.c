#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 949357126U;
unsigned int var_4 = 2202682146U;
unsigned short var_5 = (unsigned short)50323;
unsigned int var_6 = 2694465389U;
unsigned short var_8 = (unsigned short)59853;
int zero = 0;
unsigned int var_10 = 3635642987U;
unsigned short var_11 = (unsigned short)19186;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)31270;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
