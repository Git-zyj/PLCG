#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)189;
_Bool var_4 = (_Bool)1;
unsigned int var_8 = 2181299729U;
unsigned int var_10 = 954387620U;
short var_12 = (short)-2768;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 116795084;
unsigned int var_17 = 2884422146U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
