#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2050173706980313227LL;
int zero = 0;
unsigned char var_18 = (unsigned char)6;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)195;
_Bool var_21 = (_Bool)0;
long long int var_22 = 5956669823974306193LL;
int var_23 = 521599469;
unsigned short var_24 = (unsigned short)15518;
short var_25 = (short)-31135;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 14242717928794049649ULL;
unsigned int var_28 = 1214724320U;
unsigned long long int var_29 = 13735781418225090132ULL;
unsigned short var_30 = (unsigned short)29684;
unsigned short var_31 = (unsigned short)969;
signed char var_32 = (signed char)68;
short var_33 = (short)3119;
_Bool var_34 = (_Bool)1;
_Bool var_35 = (_Bool)0;
unsigned short var_36 = (unsigned short)27747;
long long int var_37 = 9167405395468583132LL;
_Bool arr_2 [15] ;
unsigned short arr_8 [15] [15] [15] [15] ;
unsigned int arr_17 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)41304 : (unsigned short)55217;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = 4218990595U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
