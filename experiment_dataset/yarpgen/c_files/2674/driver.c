#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_4 = (unsigned short)31138;
unsigned short var_5 = (unsigned short)8128;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)1;
short var_13 = (short)20638;
int zero = 0;
unsigned short var_14 = (unsigned short)59801;
unsigned long long int var_15 = 18433799058046362878ULL;
unsigned short var_16 = (unsigned short)59663;
void init() {
}

void checksum() {
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
