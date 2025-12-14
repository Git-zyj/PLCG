#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 930070594;
unsigned int var_1 = 2361801667U;
unsigned char var_2 = (unsigned char)15;
signed char var_6 = (signed char)54;
int zero = 0;
unsigned int var_11 = 3223991450U;
unsigned short var_12 = (unsigned short)20109;
unsigned char var_13 = (unsigned char)100;
_Bool var_14 = (_Bool)0;
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
