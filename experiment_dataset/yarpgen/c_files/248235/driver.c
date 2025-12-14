#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-34;
unsigned int var_7 = 557627174U;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-15998;
unsigned char var_11 = (unsigned char)63;
signed char var_12 = (signed char)-17;
unsigned int var_13 = 1008853302U;
unsigned short var_14 = (unsigned short)13729;
int zero = 0;
long long int var_16 = 169627490661063846LL;
long long int var_17 = 2458382189100370396LL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 800128197U;
short var_20 = (short)-19249;
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
