#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7606523957725807840ULL;
signed char var_1 = (signed char)94;
unsigned long long int var_2 = 18371995671344002682ULL;
short var_3 = (short)12855;
unsigned long long int var_4 = 3919522223012469627ULL;
unsigned long long int var_5 = 9626749201915028036ULL;
unsigned char var_6 = (unsigned char)122;
short var_7 = (short)-7820;
unsigned long long int var_8 = 11762586653166912712ULL;
unsigned char var_9 = (unsigned char)161;
unsigned int var_10 = 3188805467U;
short var_11 = (short)6591;
int zero = 0;
short var_12 = (short)-3018;
unsigned char var_13 = (unsigned char)209;
unsigned long long int var_14 = 4122961346163810552ULL;
signed char var_15 = (signed char)-2;
unsigned long long int var_16 = 5727067349870751082ULL;
short var_17 = (short)3835;
int var_18 = 278312945;
short var_19 = (short)-19339;
short var_20 = (short)27598;
unsigned char var_21 = (unsigned char)222;
int var_22 = 1489912666;
unsigned long long int var_23 = 10224067134560420449ULL;
signed char var_24 = (signed char)58;
short var_25 = (short)19394;
unsigned long long int var_26 = 12506991728505409682ULL;
int var_27 = -1286939249;
short var_28 = (short)23156;
short var_29 = (short)26356;
short arr_0 [22] ;
signed char arr_1 [22] ;
short arr_2 [22] ;
unsigned int arr_3 [22] [22] ;
short arr_4 [22] [22] [22] ;
unsigned char arr_5 [22] [22] [22] ;
unsigned int arr_6 [22] [22] [22] ;
short arr_8 [22] ;
unsigned long long int arr_9 [22] [22] [22] [22] ;
unsigned long long int arr_10 [22] [22] [22] [22] ;
short arr_11 [22] [22] [22] [22] ;
int arr_12 [22] ;
unsigned long long int arr_14 [22] [22] [22] [22] [22] ;
short arr_15 [22] [22] [22] [22] [22] [22] ;
signed char arr_16 [22] [22] [22] [22] [22] [22] ;
unsigned short arr_20 [22] [22] ;
unsigned char arr_24 [22] [22] [22] [22] ;
short arr_27 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)27659;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)30694;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 1211367113U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-4495;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3506370292U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (short)-6496;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 11937371583004076365ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 15607281256534602239ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)12302;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 988598902;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 14473338287891415999ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-20761;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)43996 : (unsigned short)54194;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (short)-26510;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
