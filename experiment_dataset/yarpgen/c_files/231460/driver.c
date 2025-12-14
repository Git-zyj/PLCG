#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15380458078992534005ULL;
unsigned long long int var_1 = 14748055132062099718ULL;
unsigned short var_2 = (unsigned short)29729;
unsigned long long int var_3 = 7773208641299946773ULL;
unsigned short var_5 = (unsigned short)16194;
unsigned int var_6 = 347026409U;
unsigned long long int var_7 = 279286259399483116ULL;
int var_8 = 1485590981;
unsigned short var_9 = (unsigned short)52551;
_Bool var_10 = (_Bool)1;
long long int var_11 = -985897225244358770LL;
int var_12 = -1370936276;
signed char var_13 = (signed char)112;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -38381789;
int var_16 = 430115762;
unsigned int var_17 = 1733677998U;
unsigned int var_18 = 215958058U;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-63;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)15651;
signed char var_23 = (signed char)-84;
_Bool var_24 = (_Bool)0;
int var_25 = 465183789;
unsigned int var_26 = 1301964527U;
unsigned short var_27 = (unsigned short)49445;
int var_28 = -1775191462;
int var_29 = 473440043;
unsigned int var_30 = 2182043015U;
int arr_0 [15] [15] ;
_Bool arr_1 [15] [15] ;
long long int arr_3 [15] [15] [15] ;
unsigned short arr_5 [15] [15] [15] ;
signed char arr_6 [16] ;
unsigned long long int arr_7 [16] ;
unsigned char arr_9 [16] [16] ;
unsigned char arr_11 [16] [16] ;
unsigned long long int arr_12 [16] [16] ;
long long int arr_16 [15] ;
int arr_17 [15] ;
int arr_22 [12] ;
unsigned int arr_25 [12] [12] [12] ;
unsigned long long int arr_27 [12] ;
_Bool arr_31 [12] [12] [12] [12] [12] ;
unsigned short arr_36 [12] [12] [12] [12] ;
unsigned long long int arr_39 [19] ;
unsigned long long int arr_44 [19] [19] [19] [19] [19] ;
long long int arr_14 [16] ;
long long int arr_18 [15] ;
unsigned short arr_19 [15] [15] ;
_Bool arr_33 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -1288281540;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 8079509859690629574LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)21039;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 3955295551087635847ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = 6703128789847769589ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = -5719285550071226411LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = 407290982;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = 1538947789;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 1425191371U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_27 [i_0] = 12491432450662997076ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)54269 : (unsigned short)49588;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_39 [i_0] = 11325708203067975054ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 1291811551703186142ULL : 13697544442082555224ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = 1949798551646616793LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = 3081196984698691000LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)14401;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
