#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)1;
int var_6 = 889070362;
unsigned int var_10 = 2197428354U;
int zero = 0;
long long int var_16 = 7168950115918260181LL;
unsigned int var_17 = 706452136U;
short var_18 = (short)18052;
unsigned short var_19 = (unsigned short)46750;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
