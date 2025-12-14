#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13438110989386266911ULL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)61;
unsigned char var_5 = (unsigned char)101;
long long int var_6 = -2053455926936913277LL;
long long int var_8 = -1771796837053262802LL;
unsigned char var_9 = (unsigned char)178;
signed char var_10 = (signed char)12;
unsigned short var_11 = (unsigned short)19987;
short var_16 = (short)-23379;
int zero = 0;
int var_17 = -1620581334;
int var_18 = -171725528;
unsigned char var_19 = (unsigned char)46;
unsigned short var_20 = (unsigned short)24169;
int var_21 = -1589172117;
_Bool var_22 = (_Bool)1;
long long int var_23 = 9087246136802314874LL;
unsigned char var_24 = (unsigned char)51;
unsigned int var_25 = 1982081217U;
short var_26 = (short)28156;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 1201357213411579307ULL;
unsigned char var_30 = (unsigned char)250;
signed char var_31 = (signed char)-9;
unsigned short var_32 = (unsigned short)60664;
unsigned char var_33 = (unsigned char)71;
unsigned long long int var_34 = 3249682410146383233ULL;
unsigned char var_35 = (unsigned char)39;
signed char arr_0 [18] ;
short arr_2 [18] ;
unsigned short arr_3 [18] ;
unsigned long long int arr_4 [19] ;
unsigned char arr_5 [19] [19] ;
unsigned char arr_6 [19] ;
unsigned int arr_8 [19] [19] [19] ;
unsigned long long int arr_9 [19] [19] [19] [19] ;
signed char arr_10 [19] [19] [19] [19] ;
short arr_11 [19] [19] [19] [19] ;
unsigned char arr_13 [19] [19] ;
unsigned char arr_14 [19] [19] [19] [19] [19] ;
unsigned char arr_15 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-25838;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)35969;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 15890837841593173736ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1762141752U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 5053468544904302844ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)-19956;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)118;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
