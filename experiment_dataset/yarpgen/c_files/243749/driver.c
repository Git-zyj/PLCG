#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55996;
short var_5 = (short)11063;
unsigned short var_6 = (unsigned short)16909;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 2487770792U;
int var_11 = 859116358;
int zero = 0;
int var_15 = 1167499618;
int var_16 = -1358649963;
unsigned int var_17 = 2784669981U;
int var_18 = 2042764896;
unsigned short var_19 = (unsigned short)53219;
unsigned char var_20 = (unsigned char)139;
unsigned long long int var_21 = 2344142134894197002ULL;
int var_22 = 1035378912;
unsigned short var_23 = (unsigned short)19000;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)-31;
unsigned int var_26 = 1476763777U;
unsigned int var_27 = 3603299769U;
_Bool var_28 = (_Bool)0;
unsigned int var_29 = 3747078366U;
long long int var_30 = 752820642397338295LL;
unsigned char var_31 = (unsigned char)209;
_Bool var_32 = (_Bool)1;
int var_33 = 1904191643;
int var_34 = 1838290153;
unsigned int var_35 = 1871062288U;
unsigned int var_36 = 384013789U;
signed char var_37 = (signed char)10;
long long int var_38 = 4175897366841397906LL;
long long int var_39 = -5161702932757808573LL;
long long int var_40 = 7534894113536466679LL;
unsigned int arr_0 [23] ;
int arr_1 [23] ;
unsigned int arr_2 [18] [18] ;
unsigned int arr_3 [18] ;
_Bool arr_4 [18] [18] ;
short arr_5 [18] [18] [18] ;
unsigned int arr_7 [18] [18] ;
short arr_8 [18] [18] [18] ;
unsigned short arr_13 [18] [18] [18] ;
long long int arr_17 [22] ;
unsigned int arr_23 [22] ;
short arr_26 [22] ;
signed char arr_27 [22] [22] [22] [22] ;
unsigned char arr_31 [16] ;
unsigned int arr_12 [18] [18] ;
unsigned long long int arr_15 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 541775252U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 200166435;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 282942784U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 909608774U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)2271;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 813761225U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-4290;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)27491;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = 8633295678265904877LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = 698058628U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = (short)948;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_31 [i_0] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = 1058220933U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 11992647062248776133ULL;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
