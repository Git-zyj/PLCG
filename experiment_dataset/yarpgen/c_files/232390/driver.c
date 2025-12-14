#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4068510959U;
unsigned long long int var_1 = 13092628755895753754ULL;
unsigned char var_4 = (unsigned char)73;
short var_5 = (short)24305;
short var_6 = (short)-26747;
unsigned int var_7 = 1815724743U;
unsigned long long int var_10 = 12444360100246485391ULL;
short var_11 = (short)29542;
unsigned long long int var_12 = 5408315121548126098ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)50299;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 7774248095463482155ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
