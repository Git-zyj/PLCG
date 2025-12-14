#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2990910179U;
int var_1 = -819267801;
int var_3 = 114391171;
unsigned int var_4 = 2140676570U;
unsigned short var_6 = (unsigned short)15140;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)12807;
int zero = 0;
short var_11 = (short)2849;
signed char var_12 = (signed char)96;
signed char var_13 = (signed char)-120;
unsigned int var_14 = 3618768377U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
