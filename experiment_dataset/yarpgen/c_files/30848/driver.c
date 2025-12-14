#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)159;
signed char var_2 = (signed char)48;
unsigned char var_3 = (unsigned char)27;
int var_4 = -1439113917;
int var_5 = 101787782;
_Bool var_6 = (_Bool)0;
int var_8 = 520273628;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-99;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 17686890756153845161ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
