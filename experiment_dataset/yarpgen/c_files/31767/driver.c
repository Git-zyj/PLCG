#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)108;
unsigned short var_7 = (unsigned short)46627;
unsigned short var_8 = (unsigned short)28;
_Bool var_10 = (_Bool)1;
int var_12 = -520654295;
unsigned short var_14 = (unsigned short)32461;
unsigned int var_19 = 1719665540U;
int zero = 0;
unsigned short var_20 = (unsigned short)35253;
unsigned short var_21 = (unsigned short)38173;
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
