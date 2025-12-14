#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32095;
unsigned long long int var_2 = 12432326230112192083ULL;
_Bool var_3 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)25351;
int zero = 0;
unsigned short var_12 = (unsigned short)57677;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)45768;
unsigned char var_15 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
