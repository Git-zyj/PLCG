#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3603398672U;
_Bool var_2 = (_Bool)0;
signed char var_6 = (signed char)23;
int var_7 = 2005107278;
unsigned char var_9 = (unsigned char)12;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3006962077U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
