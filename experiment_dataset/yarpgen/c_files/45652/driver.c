#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
unsigned char var_1 = (unsigned char)76;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)124;
signed char var_10 = (signed char)-94;
unsigned char var_11 = (unsigned char)78;
int zero = 0;
signed char var_15 = (signed char)-13;
signed char var_16 = (signed char)-15;
unsigned long long int var_17 = 13410656221184016651ULL;
unsigned long long int var_18 = 1639400779626683709ULL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)2520;
int var_21 = -942765735;
unsigned char var_22 = (unsigned char)115;
unsigned long long int var_23 = 16307320936633877186ULL;
short var_24 = (short)19964;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 11244490906558171311ULL;
unsigned int var_27 = 3145511775U;
unsigned char var_28 = (unsigned char)214;
int arr_10 [19] [19] [19] [19] [19] ;
long long int arr_11 [19] ;
unsigned int arr_24 [14] ;
unsigned char arr_25 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 1892271020;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = -565901786679815545LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_24 [i_0] = 1446995180U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = (unsigned char)228;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
