#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 863540281U;
short var_4 = (short)4947;
unsigned int var_5 = 1658484303U;
unsigned int var_7 = 118161681U;
unsigned int var_8 = 902848891U;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -1862060727;
unsigned char var_13 = (unsigned char)9;
unsigned int var_14 = 1901732972U;
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
