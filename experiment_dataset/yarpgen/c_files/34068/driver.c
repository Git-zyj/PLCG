#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)38313;
unsigned short var_7 = (unsigned short)30274;
unsigned long long int var_8 = 5564841961104479368ULL;
int var_9 = -1897303610;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 11360352424055028446ULL;
unsigned char var_13 = (unsigned char)128;
unsigned short var_17 = (unsigned short)24221;
int var_18 = 1183438143;
int zero = 0;
unsigned short var_19 = (unsigned short)55034;
unsigned char var_20 = (unsigned char)69;
unsigned short var_21 = (unsigned short)64488;
unsigned short var_22 = (unsigned short)31356;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
