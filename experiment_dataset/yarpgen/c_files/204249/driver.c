#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)24;
unsigned short var_8 = (unsigned short)23583;
unsigned int var_9 = 4071913651U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)15076;
signed char var_17 = (signed char)-97;
unsigned short var_18 = (unsigned short)21563;
signed char var_19 = (signed char)29;
signed char var_20 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
