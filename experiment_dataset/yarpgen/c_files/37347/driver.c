#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6809624172900275812ULL;
unsigned long long int var_3 = 12709383497010530137ULL;
long long int var_4 = -1099389980581245397LL;
int var_6 = -1453678501;
unsigned short var_8 = (unsigned short)45896;
short var_11 = (short)21546;
signed char var_14 = (signed char)-3;
short var_16 = (short)12325;
int zero = 0;
unsigned long long int var_19 = 5891454360610894633ULL;
short var_20 = (short)-24843;
int var_21 = -1603921319;
unsigned int var_22 = 33910168U;
signed char var_23 = (signed char)90;
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
