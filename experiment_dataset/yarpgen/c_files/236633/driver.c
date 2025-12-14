#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -13979009;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3194892389U;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)43420;
int var_10 = -409441541;
int zero = 0;
unsigned char var_11 = (unsigned char)184;
unsigned long long int var_12 = 13397433091035342911ULL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)3204;
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
