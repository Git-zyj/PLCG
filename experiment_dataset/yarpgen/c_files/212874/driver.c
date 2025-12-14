#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
int var_2 = 381245496;
_Bool var_6 = (_Bool)0;
short var_7 = (short)10797;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)171;
_Bool var_10 = (_Bool)0;
short var_11 = (short)31527;
unsigned short var_13 = (unsigned short)42669;
long long int var_15 = 1534720438329422507LL;
unsigned int var_17 = 2704403500U;
int zero = 0;
int var_20 = 858612074;
int var_21 = 1650753590;
signed char var_22 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
