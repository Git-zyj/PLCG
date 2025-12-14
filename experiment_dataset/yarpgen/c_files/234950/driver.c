#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)19163;
int var_3 = 123557421;
unsigned short var_4 = (unsigned short)48966;
_Bool var_7 = (_Bool)1;
int var_8 = 1941984737;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)106;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
