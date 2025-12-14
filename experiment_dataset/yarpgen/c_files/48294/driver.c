#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1723946696337066207LL;
short var_2 = (short)-8924;
unsigned int var_5 = 3481633284U;
_Bool var_6 = (_Bool)1;
long long int var_7 = 2896461528703161554LL;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 2549729430U;
unsigned int var_13 = 2071371380U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
