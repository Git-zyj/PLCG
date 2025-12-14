#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1531672579U;
short var_4 = (short)29837;
unsigned int var_6 = 3567282710U;
unsigned int var_14 = 3477147840U;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-111;
unsigned short var_20 = (unsigned short)32278;
unsigned int var_21 = 496448720U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
