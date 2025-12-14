#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_5 = (unsigned char)252;
signed char var_7 = (signed char)10;
unsigned int var_9 = 995168701U;
unsigned short var_10 = (unsigned short)6481;
signed char var_14 = (signed char)80;
int zero = 0;
short var_15 = (short)4543;
unsigned short var_16 = (unsigned short)18317;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
