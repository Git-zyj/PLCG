#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1760097611;
unsigned long long int var_1 = 18410964388459344804ULL;
unsigned int var_2 = 1316191490U;
int var_3 = 68882426;
short var_4 = (short)17066;
int var_5 = -1815551396;
signed char var_6 = (signed char)-86;
unsigned int var_7 = 920030239U;
unsigned long long int var_8 = 6174534233686220646ULL;
long long int var_10 = -6882689506599617497LL;
int zero = 0;
unsigned short var_11 = (unsigned short)52898;
long long int var_12 = -7927217051835324310LL;
unsigned char var_13 = (unsigned char)193;
int var_14 = 286571415;
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
