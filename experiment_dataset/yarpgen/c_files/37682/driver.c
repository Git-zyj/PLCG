#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 12715485178584661278ULL;
_Bool var_8 = (_Bool)1;
signed char var_14 = (signed char)111;
int zero = 0;
unsigned int var_15 = 1868259698U;
unsigned short var_16 = (unsigned short)1516;
signed char var_17 = (signed char)-49;
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
