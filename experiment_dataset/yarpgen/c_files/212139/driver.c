#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14753;
unsigned short var_3 = (unsigned short)51765;
_Bool var_4 = (_Bool)1;
short var_7 = (short)22678;
short var_8 = (short)21087;
int var_12 = -1570156569;
int var_14 = 1742669340;
long long int var_18 = -3735526914117733223LL;
int zero = 0;
int var_20 = 1501887449;
long long int var_21 = -362137955892649515LL;
void init() {
}

void checksum() {
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
