#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)151;
unsigned short var_4 = (unsigned short)51084;
short var_5 = (short)-1355;
unsigned long long int var_10 = 16552202736556488638ULL;
short var_12 = (short)-31909;
int var_14 = -262416193;
unsigned long long int var_15 = 6861198577685893009ULL;
unsigned char var_16 = (unsigned char)41;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 8385236040393308747ULL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)12243;
unsigned short var_23 = (unsigned short)36666;
unsigned char arr_0 [14] [14] ;
unsigned long long int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 7613121558991284446ULL : 14765992409853239743ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
