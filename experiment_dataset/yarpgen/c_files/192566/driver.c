#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1593728998;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)44884;
_Bool var_10 = (_Bool)0;
int var_12 = 1133067142;
int zero = 0;
unsigned char var_13 = (unsigned char)134;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)15;
void init() {
}

void checksum() {
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
