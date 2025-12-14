#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8910150810361336709ULL;
signed char var_2 = (signed char)114;
unsigned char var_4 = (unsigned char)198;
long long int var_5 = 6098415974432587220LL;
signed char var_6 = (signed char)39;
unsigned int var_7 = 1649338521U;
unsigned int var_8 = 1647107159U;
unsigned char var_9 = (unsigned char)179;
long long int var_11 = -8503601317565614908LL;
unsigned int var_12 = 2641093683U;
unsigned short var_13 = (unsigned short)18410;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = 937444175;
unsigned int var_16 = 797262841U;
long long int var_17 = 1332406483103103076LL;
unsigned int var_18 = 2567288062U;
int var_19 = 1515272045;
unsigned short var_20 = (unsigned short)52986;
_Bool arr_0 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
