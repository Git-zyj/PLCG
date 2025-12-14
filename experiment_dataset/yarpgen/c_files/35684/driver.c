#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)8;
unsigned short var_5 = (unsigned short)35923;
long long int var_8 = -8014789645769572884LL;
unsigned short var_14 = (unsigned short)660;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2149690448U;
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
