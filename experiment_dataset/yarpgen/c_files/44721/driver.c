#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7724;
unsigned short var_4 = (unsigned short)62217;
signed char var_7 = (signed char)-49;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)58314;
int var_14 = 1568267854;
signed char var_15 = (signed char)-110;
unsigned long long int var_16 = 3906607120086358762ULL;
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
