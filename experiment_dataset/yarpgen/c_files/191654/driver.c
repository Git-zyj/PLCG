#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1467942071;
unsigned char var_1 = (unsigned char)11;
int var_2 = -659312239;
unsigned long long int var_3 = 8213207000599436590ULL;
int var_4 = -1750914914;
unsigned long long int var_6 = 5931839419865132019ULL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)31669;
unsigned long long int var_9 = 1414656754260517258ULL;
signed char var_10 = (signed char)-22;
int zero = 0;
unsigned long long int var_11 = 2943959548409350424ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 8800650687990704195ULL;
signed char var_14 = (signed char)124;
unsigned long long int var_15 = 14685664873509486724ULL;
unsigned int var_16 = 1232209920U;
signed char var_17 = (signed char)46;
short var_18 = (short)-12458;
int var_19 = -1224390393;
unsigned long long int var_20 = 6540582489969443671ULL;
signed char var_21 = (signed char)100;
unsigned int var_22 = 1744396701U;
int var_23 = -951809945;
unsigned long long int var_24 = 3998746668895754499ULL;
unsigned long long int var_25 = 12041434443451997377ULL;
_Bool var_26 = (_Bool)1;
int var_27 = 1170115211;
short var_28 = (short)-12469;
signed char var_29 = (signed char)116;
short var_30 = (short)17530;
int var_31 = -803924401;
unsigned long long int var_32 = 2843906270810200592ULL;
_Bool var_33 = (_Bool)0;
int var_34 = 969256101;
unsigned long long int var_35 = 4725788051195672985ULL;
signed char var_36 = (signed char)33;
unsigned long long int var_37 = 13673207127598771896ULL;
unsigned long long int var_38 = 14507836074118912434ULL;
_Bool var_39 = (_Bool)1;
unsigned char var_40 = (unsigned char)53;
unsigned char var_41 = (unsigned char)224;
unsigned char var_42 = (unsigned char)239;
unsigned long long int var_43 = 15786764115399229877ULL;
_Bool var_44 = (_Bool)1;
short var_45 = (short)-659;
unsigned long long int var_46 = 11831527725479617372ULL;
int var_47 = 792399127;
unsigned long long int var_48 = 1389213535777163068ULL;
signed char var_49 = (signed char)-90;
unsigned int var_50 = 3146449283U;
short var_51 = (short)24148;
int var_52 = 1001466800;
unsigned long long int var_53 = 13827806017664467438ULL;
short var_54 = (short)8742;
int var_55 = 167365990;
unsigned long long int var_56 = 736927979811517024ULL;
unsigned long long int var_57 = 6139394985581003800ULL;
int arr_0 [25] [25] ;
int arr_1 [25] ;
int arr_2 [25] ;
unsigned long long int arr_3 [25] ;
unsigned long long int arr_4 [25] [25] ;
unsigned long long int arr_5 [25] ;
unsigned long long int arr_6 [25] ;
_Bool arr_7 [25] ;
unsigned long long int arr_8 [25] ;
int arr_9 [25] ;
int arr_11 [25] ;
short arr_12 [25] [25] ;
short arr_13 [25] ;
int arr_14 [25] ;
unsigned long long int arr_15 [25] [25] ;
unsigned char arr_18 [25] ;
_Bool arr_19 [25] [25] [25] ;
unsigned char arr_20 [25] [25] [25] ;
short arr_21 [25] [25] [25] ;
_Bool arr_22 [25] [25] [25] [25] ;
unsigned long long int arr_23 [25] [25] [25] [25] ;
unsigned long long int arr_25 [25] ;
unsigned long long int arr_26 [25] [25] [25] [25] ;
unsigned long long int arr_27 [25] ;
unsigned long long int arr_30 [25] [25] [25] [25] [25] ;
short arr_31 [25] ;
unsigned long long int arr_33 [25] [25] [25] [25] [25] ;
unsigned long long int arr_34 [25] [25] [25] [25] [25] [25] [25] ;
unsigned long long int arr_36 [25] [25] [25] [25] [25] ;
unsigned long long int arr_42 [25] ;
signed char arr_43 [25] [25] ;
short arr_45 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 20387882;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1446709546;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1268330556 : 2123467170;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 5404725392569706706ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 12224884807774498962ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 11846380330443794747ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 12130350073712378733ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 11539412528413256554ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 69327850;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = -1602592876;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-23037 : (short)-25666;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)-27232 : (short)17932;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = -1841119655;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = 686975205319301380ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)137 : (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)11941 : (short)-24655;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 2036441408670561483ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_25 [i_0] = 6857067309960862419ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 260727049890730097ULL : 6393639646607518755ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = 16062022489194935074ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = 2352485500629746229ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (short)-24897 : (short)-3333;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = 6089450455286774651ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? 12820597347292282337ULL : 17466171922134100934ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 5436797927280685079ULL : 1207033116025937364ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? 11518495206290349147ULL : 9216891355472452718ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_43 [i_0] [i_1] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (short)-20702;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
