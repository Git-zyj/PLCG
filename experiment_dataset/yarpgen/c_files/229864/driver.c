#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-595;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)100;
unsigned int var_9 = 4199676004U;
unsigned int var_10 = 1216381182U;
int zero = 0;
unsigned int var_17 = 4287224946U;
int var_18 = 1189082372;
int var_19 = -411340159;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
