#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)123;
int var_7 = -1181547611;
short var_8 = (short)20745;
unsigned short var_9 = (unsigned short)41483;
unsigned int var_10 = 2406261535U;
long long int var_11 = 2974778005868505147LL;
long long int var_13 = -7936539845614821470LL;
short var_14 = (short)32263;
int zero = 0;
unsigned short var_15 = (unsigned short)24919;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)54284;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
