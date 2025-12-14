#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
long long int var_12 = -1742012430027337386LL;
short var_13 = (short)-281;
unsigned short var_16 = (unsigned short)55037;
short var_17 = (short)-19473;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)-3676;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1547684234U;
unsigned int var_23 = 265845295U;
unsigned int var_24 = 3692829108U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
