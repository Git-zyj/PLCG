#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1597548826;
unsigned int var_3 = 3726583906U;
unsigned short var_4 = (unsigned short)31362;
int var_6 = -1562881817;
unsigned long long int var_8 = 3036039481021329394ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)13583;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
