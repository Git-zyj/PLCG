#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 243277725U;
unsigned long long int var_1 = 16633115502863956621ULL;
unsigned long long int var_2 = 4964162811504526551ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 6819584277070635744ULL;
short var_5 = (short)-22810;
short var_6 = (short)-8557;
unsigned short var_7 = (unsigned short)35821;
unsigned short var_8 = (unsigned short)13257;
int var_9 = 1853362670;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-106;
int var_13 = 125260835;
unsigned short var_14 = (unsigned short)42539;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
