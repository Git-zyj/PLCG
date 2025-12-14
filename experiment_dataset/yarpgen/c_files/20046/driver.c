#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1542838146;
_Bool var_1 = (_Bool)1;
int var_2 = -409015487;
short var_4 = (short)-3163;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)42841;
unsigned char var_7 = (unsigned char)63;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-500;
int var_10 = -297561447;
unsigned short var_11 = (unsigned short)52373;
unsigned long long int var_14 = 2459197720575138950ULL;
signed char var_16 = (signed char)62;
unsigned char var_17 = (unsigned char)207;
int zero = 0;
int var_20 = 1266355418;
unsigned short var_21 = (unsigned short)60046;
short var_22 = (short)-18423;
unsigned long long int var_23 = 11797199697781060470ULL;
unsigned int var_24 = 1468058885U;
unsigned long long int var_25 = 15897729094560982965ULL;
int var_26 = 1195094711;
unsigned short var_27 = (unsigned short)48870;
unsigned char var_28 = (unsigned char)187;
unsigned long long int var_29 = 9099471145139415707ULL;
unsigned long long int var_30 = 15900708727625767391ULL;
short var_31 = (short)23216;
short var_32 = (short)-13030;
unsigned char var_33 = (unsigned char)172;
unsigned short arr_0 [18] [18] ;
unsigned long long int arr_1 [18] [18] ;
_Bool arr_2 [18] ;
int arr_4 [18] ;
unsigned short arr_6 [18] [18] [18] ;
short arr_7 [18] [18] [18] ;
unsigned short arr_10 [18] [18] [18] [18] ;
signed char arr_11 [18] [18] [18] [18] ;
unsigned char arr_12 [18] [18] [18] ;
short arr_13 [18] [18] ;
unsigned short arr_14 [18] [18] [18] [18] [18] [18] [18] ;
unsigned int arr_15 [18] [18] [18] [18] [18] [18] [18] ;
int arr_16 [18] ;
unsigned char arr_19 [18] ;
long long int arr_20 [18] [18] [18] [18] ;
signed char arr_21 [18] [18] [18] ;
long long int arr_22 [18] [18] [18] [18] ;
unsigned char arr_27 [18] ;
unsigned short arr_31 [18] ;
long long int arr_32 [18] ;
int arr_34 [18] [18] [18] [18] ;
signed char arr_35 [18] ;
int arr_37 [18] [18] ;
long long int arr_40 [18] [18] [18] [18] [18] ;
signed char arr_50 [18] [18] [18] ;
long long int arr_51 [18] [18] [18] ;
unsigned short arr_3 [18] ;
long long int arr_17 [18] [18] [18] [18] [18] ;
unsigned long long int arr_18 [18] [18] [18] [18] ;
int arr_25 [18] [18] [18] [18] [18] ;
long long int arr_26 [18] [18] [18] [18] ;
unsigned int arr_42 [18] [18] [18] ;
unsigned long long int arr_45 [18] ;
long long int arr_46 [18] ;
unsigned long long int arr_47 [18] [18] [18] ;
signed char arr_52 [18] [18] ;
signed char arr_53 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)44539;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 18399314443603614760ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 429920109;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)46990;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-12201;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)50993;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (short)24158;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? (unsigned short)25203 : (unsigned short)25799;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 2886046670U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = -116029594;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = -2899673838842518406LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 8806151971537437244LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned char)30 : (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_31 [i_0] = (unsigned short)37962;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? 1480652212198536155LL : -1370290728301914223LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = -1062163746;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_35 [i_0] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_37 [i_0] [i_1] = 141204583;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 6979029179325247567LL : -7589752428820265857LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = -6797803021680215843LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)53739;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1376803421982548301LL : 7808799189069743229LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 11584195131019782975ULL : 18253810396339482151ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -1598286170 : -1405623946;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 8229051388693957078LL : -54255013283455364LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2024423346U : 481589708U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_45 [i_0] = 1368310314863945019ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_46 [i_0] = 8282103184622263352LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = 12462568163661310828ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_52 [i_0] [i_1] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_53 [i_0] = (signed char)-99;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_52 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_53 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
