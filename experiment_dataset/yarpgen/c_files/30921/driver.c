#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)8054;
int var_11 = -1286144492;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)20;
int var_15 = -655979020;
int zero = 0;
long long int var_18 = -4284772617329601685LL;
short var_19 = (short)6602;
unsigned long long int var_20 = 15860003502040725887ULL;
int var_21 = 587427734;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
