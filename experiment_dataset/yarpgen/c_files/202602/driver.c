#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -5045799702303888153LL;
int var_3 = 1748128633;
unsigned short var_6 = (unsigned short)8112;
unsigned long long int var_7 = 13152420816370965892ULL;
int var_8 = -395889451;
unsigned long long int var_9 = 14983338922369634134ULL;
int var_11 = -1339856132;
_Bool var_12 = (_Bool)1;
int var_14 = -349997284;
short var_16 = (short)7038;
int zero = 0;
unsigned int var_17 = 1616545925U;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-8010;
unsigned short var_20 = (unsigned short)9966;
unsigned int var_21 = 650943180U;
int var_22 = -687127242;
short var_23 = (short)31056;
int var_24 = 180554283;
short var_25 = (short)12151;
long long int var_26 = 964296042827317250LL;
unsigned long long int arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned long long int arr_2 [11] ;
unsigned char arr_5 [11] [11] ;
unsigned short arr_6 [11] ;
short arr_3 [11] [11] ;
long long int arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1611900763109705404ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 3233869187113325138ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)41480;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-21108;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 4231972148646474713LL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
