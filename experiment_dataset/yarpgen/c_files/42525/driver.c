#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30857;
_Bool var_7 = (_Bool)0;
int var_17 = 67568339;
int zero = 0;
short var_19 = (short)9367;
unsigned int var_20 = 684986422U;
unsigned short var_21 = (unsigned short)18371;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
