#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 205540922U;
unsigned int var_6 = 140708381U;
_Bool var_7 = (_Bool)1;
short var_11 = (short)18896;
unsigned int var_12 = 499086440U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 534496471418645874ULL;
unsigned short var_20 = (unsigned short)56337;
_Bool var_21 = (_Bool)0;
int var_22 = -1112623366;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
