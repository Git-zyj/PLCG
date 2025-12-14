#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)131;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 13864223572347429896ULL;
unsigned long long int var_3 = 13058830182504809755ULL;
unsigned short var_4 = (unsigned short)20130;
unsigned short var_5 = (unsigned short)18793;
int var_6 = 1565767195;
_Bool var_7 = (_Bool)1;
int var_9 = -842469590;
int var_10 = -1568135552;
unsigned long long int var_11 = 16851040207051261124ULL;
int var_14 = 328318938;
int var_15 = 1545276194;
unsigned short var_16 = (unsigned short)58839;
unsigned char var_18 = (unsigned char)91;
int zero = 0;
signed char var_19 = (signed char)-4;
int var_20 = -567942055;
unsigned long long int var_21 = 11165522826830868538ULL;
unsigned long long int var_22 = 12530061469545217392ULL;
int var_23 = 1226125660;
int var_24 = 1276127180;
int var_25 = -1601188408;
int var_26 = 434035438;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)1;
int arr_0 [10] ;
unsigned char arr_1 [10] ;
unsigned long long int arr_4 [10] [10] ;
_Bool arr_5 [10] ;
signed char arr_8 [10] [10] ;
int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 637331444;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 3019404473348996593ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -1371583607;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
