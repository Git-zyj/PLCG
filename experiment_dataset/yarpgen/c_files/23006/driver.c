#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 328780753339898319LL;
unsigned char var_1 = (unsigned char)100;
unsigned char var_2 = (unsigned char)111;
int var_3 = 1446934064;
unsigned int var_4 = 1189489644U;
unsigned int var_5 = 2085159449U;
long long int var_6 = -93912432660427258LL;
long long int var_7 = 5988892986745206293LL;
unsigned char var_8 = (unsigned char)28;
unsigned int var_10 = 3879402999U;
long long int var_11 = -8660670834087760738LL;
int var_12 = -1144338809;
int zero = 0;
unsigned char var_13 = (unsigned char)228;
long long int var_14 = 3086900708080227613LL;
long long int var_15 = -1131519580587690422LL;
unsigned char var_16 = (unsigned char)88;
long long int var_17 = 7236337761730877595LL;
unsigned char var_18 = (unsigned char)77;
unsigned int var_19 = 2009259753U;
long long int var_20 = 6414624368497929661LL;
int var_21 = 1002248634;
int var_22 = -718159655;
long long int var_23 = 9052542292510854612LL;
unsigned char var_24 = (unsigned char)109;
unsigned char var_25 = (unsigned char)226;
long long int var_26 = -5539473029365725192LL;
unsigned int var_27 = 2725905739U;
long long int var_28 = 6946726125742434819LL;
long long int var_29 = -1675504664629173876LL;
int var_30 = -551776193;
int var_31 = -1058383907;
int var_32 = 1965009839;
unsigned char var_33 = (unsigned char)153;
int var_34 = -1306159184;
int var_35 = 444943428;
unsigned char var_36 = (unsigned char)207;
int var_37 = -1536477233;
int var_38 = -122273894;
int arr_1 [17] ;
long long int arr_9 [15] [15] ;
int arr_11 [15] ;
long long int arr_14 [15] [15] [15] ;
unsigned int arr_15 [15] [15] [15] [15] [15] [15] ;
unsigned char arr_18 [20] [20] ;
long long int arr_19 [20] ;
unsigned int arr_20 [20] [20] ;
unsigned char arr_21 [20] ;
unsigned char arr_23 [20] [20] [20] ;
int arr_25 [20] [20] [20] ;
long long int arr_27 [20] [20] [20] [20] [20] ;
unsigned int arr_29 [20] [20] [20] [20] [20] ;
unsigned char arr_45 [20] ;
unsigned int arr_2 [17] [17] ;
unsigned int arr_8 [15] ;
unsigned char arr_24 [20] [20] ;
unsigned char arr_32 [20] [20] [20] [20] ;
unsigned int arr_35 [20] ;
long long int arr_36 [20] [20] [20] [20] ;
long long int arr_39 [20] ;
unsigned int arr_40 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 316058731;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = -7649166860282296771LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 245048634;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -8118815766948726052LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1297223077U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = -9213763081638055997LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_20 [i_0] [i_1] = 3451987254U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = -351185493;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = -1633509466821571064LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = 1129928909U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_45 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 2614456275U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 1533501606U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_35 [i_0] = 3132792216U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = 2307551658438284846LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? -6781859504190211645LL : 3024970941525805409LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_40 [i_0] [i_1] = (i_0 % 2 == 0) ? 993827579U : 2377372413U;
}

void checksum() {
    hash(&seed, var_13);
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
