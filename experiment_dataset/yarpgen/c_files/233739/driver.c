#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9567219402339475529ULL;
unsigned long long int var_1 = 14437492826343096191ULL;
long long int var_3 = -1696442128377342046LL;
long long int var_4 = 8759413073510590946LL;
unsigned long long int var_6 = 8956890199204621728ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 3873459734925960837ULL;
unsigned char var_9 = (unsigned char)190;
unsigned long long int var_10 = 3350885476643320896ULL;
unsigned long long int var_12 = 11891951417556415191ULL;
unsigned short var_13 = (unsigned short)54599;
short var_14 = (short)-26583;
int zero = 0;
unsigned short var_16 = (unsigned short)9949;
unsigned long long int var_17 = 17822931207333077619ULL;
signed char var_18 = (signed char)58;
unsigned long long int var_19 = 5676752576027136780ULL;
short var_20 = (short)1176;
short var_21 = (short)28352;
long long int var_22 = 6754456693470884290LL;
short var_23 = (short)18002;
short var_24 = (short)4766;
signed char var_25 = (signed char)-78;
unsigned short var_26 = (unsigned short)45473;
_Bool var_27 = (_Bool)1;
unsigned short var_28 = (unsigned short)8438;
short var_29 = (short)18279;
short var_30 = (short)27482;
unsigned long long int var_31 = 11314073116675153325ULL;
unsigned long long int var_32 = 7685945617673150803ULL;
unsigned short arr_1 [12] ;
signed char arr_3 [12] [12] ;
unsigned short arr_4 [12] ;
unsigned long long int arr_5 [12] [12] [12] ;
unsigned long long int arr_6 [12] [12] [12] ;
_Bool arr_9 [12] [12] [12] [12] [12] [12] ;
long long int arr_12 [12] [12] [12] [12] [12] [12] ;
signed char arr_15 [12] [12] [12] [12] [12] [12] ;
signed char arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)27128;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)40581;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2979555729059142136ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 8944599360970328803ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 2318501101495603156LL : -5876659011381389141LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)84 : (signed char)81;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
