#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_4 = (_Bool)1;
short var_7 = (short)19145;
_Bool var_9 = (_Bool)0;
int var_12 = 579383483;
unsigned char var_13 = (unsigned char)19;
int var_16 = 2071942689;
int zero = 0;
short var_18 = (short)21501;
unsigned char var_19 = (unsigned char)42;
_Bool var_20 = (_Bool)1;
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
