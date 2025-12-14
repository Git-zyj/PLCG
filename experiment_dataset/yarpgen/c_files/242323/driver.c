#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 3554330467U;
unsigned char var_5 = (unsigned char)195;
unsigned int var_6 = 4270049435U;
_Bool var_7 = (_Bool)0;
int var_8 = 1189417672;
unsigned int var_9 = 4065823325U;
int zero = 0;
unsigned char var_10 = (unsigned char)239;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 209392350U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
