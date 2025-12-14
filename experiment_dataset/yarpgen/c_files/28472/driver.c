#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -683754398;
unsigned int var_3 = 381450893U;
_Bool var_5 = (_Bool)0;
int var_12 = -401864116;
unsigned short var_14 = (unsigned short)2871;
int var_16 = -1789127753;
short var_17 = (short)22109;
int zero = 0;
short var_18 = (short)-19438;
int var_19 = 579016844;
void init() {
}

void checksum() {
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
