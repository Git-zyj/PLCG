#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1190572811;
short var_2 = (short)20745;
unsigned short var_4 = (unsigned short)22124;
_Bool var_5 = (_Bool)1;
int var_8 = -442376020;
unsigned char var_9 = (unsigned char)105;
int var_10 = -1709080858;
signed char var_11 = (signed char)-98;
unsigned short var_12 = (unsigned short)51324;
unsigned int var_13 = 2587897186U;
unsigned short var_15 = (unsigned short)38465;
short var_16 = (short)-2752;
short var_17 = (short)-5576;
unsigned short var_18 = (unsigned short)32640;
unsigned int var_19 = 1195869452U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)41;
unsigned short var_22 = (unsigned short)44622;
unsigned long long int var_23 = 17515463905799575638ULL;
unsigned long long int var_24 = 3896616920087123244ULL;
int var_25 = -1494372404;
unsigned short var_26 = (unsigned short)5209;
unsigned short var_27 = (unsigned short)46081;
short var_28 = (short)-928;
unsigned short var_29 = (unsigned short)16826;
unsigned long long int var_30 = 202478770219273727ULL;
long long int var_31 = 4872107691129151476LL;
short var_32 = (short)-9156;
signed char var_33 = (signed char)90;
int var_34 = 1984210345;
unsigned long long int var_35 = 8806508030035434774ULL;
unsigned short var_36 = (unsigned short)32633;
unsigned short var_37 = (unsigned short)8934;
unsigned long long int var_38 = 13181401626799942952ULL;
int var_39 = 1406431586;
unsigned short var_40 = (unsigned short)8490;
unsigned long long int var_41 = 9881349020820740045ULL;
short var_42 = (short)-14961;
unsigned int var_43 = 2203392250U;
short var_44 = (short)16398;
unsigned short var_45 = (unsigned short)52688;
short var_46 = (short)-7547;
unsigned long long int var_47 = 9923031117572877747ULL;
unsigned long long int var_48 = 18438985686795678427ULL;
short var_49 = (short)12837;
unsigned long long int var_50 = 10543382353361110588ULL;
int arr_7 [20] ;
long long int arr_8 [20] ;
unsigned short arr_11 [20] [20] [20] ;
long long int arr_15 [20] [20] [20] [20] ;
unsigned short arr_18 [20] [20] [20] [20] [20] ;
unsigned long long int arr_23 [20] [20] [20] ;
unsigned int arr_28 [20] [20] [20] [20] [20] [20] ;
unsigned int arr_32 [20] [20] [20] [20] [20] ;
unsigned short arr_41 [20] [20] [20] [20] [20] ;
unsigned char arr_47 [24] ;
unsigned int arr_49 [24] ;
unsigned long long int arr_50 [24] [24] ;
unsigned short arr_5 [12] ;
int arr_21 [20] [20] [20] [20] [20] [20] ;
unsigned long long int arr_22 [20] [20] ;
long long int arr_33 [20] [20] [20] [20] [20] ;
unsigned long long int arr_51 [24] [24] ;
long long int arr_57 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = -1678972338;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = -2997088238815139644LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)35670;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 935202374119601827LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned short)47670 : (unsigned short)54723;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 6847111018867744901ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 96032317U : 3318223179U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = 2811254641U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned short)11366 : (unsigned short)30177;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_47 [i_0] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_49 [i_0] = 395677940U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_50 [i_0] [i_1] = 4683558997142972031ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34389 : (unsigned short)22432;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? -179654120 : -1209691781;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? 12044272346663520018ULL : 17917018770890586560ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -4619482987939060063LL : 1875169000845779511LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_51 [i_0] [i_1] = (i_0 % 2 == 0) ? 2041314444551679607ULL : 6373627108355974101ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_57 [i_0] [i_1] = (i_1 % 2 == 0) ? 2761048612094323866LL : -3914094555112012992LL;
}

void checksum() {
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
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_51 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_57 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
