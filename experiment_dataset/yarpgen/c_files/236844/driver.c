#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 309067153U;
int var_1 = 46366140;
unsigned int var_4 = 1162711020U;
unsigned int var_5 = 3192924680U;
int var_6 = 1872757320;
long long int var_7 = -8375775303917588327LL;
unsigned int var_9 = 3542456368U;
long long int var_10 = 6018682833808139736LL;
short var_11 = (short)-2086;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)13017;
unsigned char var_14 = (unsigned char)179;
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
