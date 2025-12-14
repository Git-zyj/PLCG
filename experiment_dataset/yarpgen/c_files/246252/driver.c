#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
unsigned long long int var_3 = 15489714759012972532ULL;
unsigned char var_6 = (unsigned char)182;
long long int var_8 = -3299510134701462562LL;
unsigned char var_9 = (unsigned char)11;
signed char var_11 = (signed char)13;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)103;
int zero = 0;
short var_20 = (short)-724;
unsigned char var_21 = (unsigned char)103;
int var_22 = -1157264583;
short var_23 = (short)19520;
signed char var_24 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
