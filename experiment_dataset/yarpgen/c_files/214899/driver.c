#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
unsigned int var_1 = 654750676U;
int var_3 = 405133046;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 293618908U;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 2048520115;
unsigned short var_20 = (unsigned short)6344;
void init() {
}

void checksum() {
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
