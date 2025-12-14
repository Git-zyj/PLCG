#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24174;
long long int var_1 = 5779905960757050436LL;
short var_12 = (short)7288;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-18606;
unsigned short var_15 = (unsigned short)18534;
short var_16 = (short)4962;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
