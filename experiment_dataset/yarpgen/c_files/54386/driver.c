#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26524;
unsigned long long int var_1 = 13393367713646303755ULL;
short var_2 = (short)-13911;
unsigned long long int var_6 = 11826812392119576365ULL;
long long int var_9 = 6151032250088030586LL;
unsigned long long int var_11 = 9366641366857561094ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)185;
unsigned char var_13 = (unsigned char)8;
int var_14 = 1698773809;
int var_15 = 860773495;
_Bool var_16 = (_Bool)0;
signed char arr_0 [18] ;
unsigned char arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)209;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
