#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4381;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)35;
unsigned int var_5 = 3955217175U;
unsigned short var_6 = (unsigned short)12819;
unsigned short var_9 = (unsigned short)24030;
signed char var_10 = (signed char)-83;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)133;
void init() {
}

void checksum() {
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
