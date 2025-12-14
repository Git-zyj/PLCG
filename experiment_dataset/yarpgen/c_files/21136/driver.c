#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60206;
unsigned short var_5 = (unsigned short)33852;
short var_6 = (short)6509;
unsigned int var_7 = 3991772292U;
short var_9 = (short)17716;
short var_10 = (short)15591;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 3384037086U;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
