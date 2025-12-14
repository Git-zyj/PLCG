#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14321;
_Bool var_2 = (_Bool)0;
int var_3 = -518767500;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)56890;
unsigned short var_12 = (unsigned short)13293;
unsigned short var_15 = (unsigned short)41905;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)124;
unsigned int var_20 = 1558037245U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
