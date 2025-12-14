#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)12762;
_Bool var_7 = (_Bool)1;
short var_11 = (short)-3491;
int var_12 = 310636637;
int zero = 0;
unsigned short var_14 = (unsigned short)22860;
unsigned short var_15 = (unsigned short)5494;
void init() {
}

void checksum() {
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
