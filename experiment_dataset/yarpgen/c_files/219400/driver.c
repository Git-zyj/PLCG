#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45293;
unsigned short var_3 = (unsigned short)2404;
int var_5 = 1571437351;
unsigned long long int var_7 = 4170995189713714426ULL;
short var_12 = (short)-15927;
unsigned short var_13 = (unsigned short)53558;
int zero = 0;
unsigned char var_17 = (unsigned char)113;
unsigned long long int var_18 = 15556534688997829865ULL;
unsigned int var_19 = 157287408U;
unsigned long long int var_20 = 7238882615978935990ULL;
int var_21 = 1364199727;
int var_22 = 178549882;
long long int var_23 = 6972871655898752987LL;
unsigned short var_24 = (unsigned short)44941;
unsigned int var_25 = 3757049391U;
int var_26 = 965959388;
unsigned short var_27 = (unsigned short)62488;
unsigned short var_28 = (unsigned short)41487;
short arr_0 [22] [22] ;
unsigned long long int arr_1 [22] ;
long long int arr_3 [21] [21] ;
short arr_5 [12] [12] ;
unsigned char arr_9 [12] [12] ;
short arr_10 [12] [12] [12] ;
unsigned short arr_15 [12] [12] [12] [12] [12] ;
unsigned char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-31286;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 2672741109923470920ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 6255192439257627945LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (short)27706;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)18702;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)14283;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)97 : (unsigned char)139;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
