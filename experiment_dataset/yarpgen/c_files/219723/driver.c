#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1067130526;
unsigned short var_2 = (unsigned short)12884;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)205;
int var_11 = 1693389943;
int var_13 = -1822632090;
unsigned char var_16 = (unsigned char)231;
unsigned char var_19 = (unsigned char)96;
int zero = 0;
unsigned char var_20 = (unsigned char)31;
unsigned int var_21 = 3968740942U;
int var_22 = -406458890;
unsigned long long int var_23 = 15808368487381163363ULL;
void init() {
}

void checksum() {
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
