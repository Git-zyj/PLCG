#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22732;
long long int var_2 = 7442293814465818186LL;
unsigned short var_3 = (unsigned short)46391;
unsigned int var_4 = 3429128157U;
unsigned long long int var_5 = 8521365108157033153ULL;
unsigned short var_6 = (unsigned short)31325;
signed char var_7 = (signed char)10;
signed char var_8 = (signed char)-64;
unsigned char var_9 = (unsigned char)139;
int zero = 0;
unsigned long long int var_12 = 17778477037816314021ULL;
int var_13 = -45704571;
int var_14 = -1789676309;
int var_15 = -555052329;
long long int var_16 = -7064160339781359967LL;
unsigned short var_17 = (unsigned short)8242;
short var_18 = (short)6990;
signed char var_19 = (signed char)118;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-1343;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)64562;
unsigned long long int var_24 = 14880211498184822854ULL;
unsigned short var_25 = (unsigned short)19608;
unsigned char var_26 = (unsigned char)150;
unsigned short var_27 = (unsigned short)28668;
signed char var_28 = (signed char)104;
short var_29 = (short)-8432;
signed char var_30 = (signed char)60;
unsigned int var_31 = 2127124147U;
short var_32 = (short)-19011;
unsigned int var_33 = 2666438767U;
unsigned char arr_0 [17] ;
signed char arr_1 [17] [17] ;
_Bool arr_2 [17] ;
unsigned int arr_5 [19] ;
signed char arr_6 [19] ;
unsigned char arr_7 [19] ;
unsigned long long int arr_8 [19] ;
unsigned char arr_11 [14] [14] ;
short arr_15 [14] [14] ;
unsigned long long int arr_18 [14] ;
long long int arr_19 [14] ;
unsigned short arr_22 [14] [14] [14] [14] ;
signed char arr_24 [14] [14] [14] [14] ;
signed char arr_25 [14] ;
signed char arr_27 [14] [14] [14] [14] [14] [14] ;
signed char arr_54 [23] ;
unsigned char arr_3 [17] ;
short arr_4 [17] ;
_Bool arr_9 [19] [19] ;
signed char arr_10 [19] [19] ;
unsigned int arr_13 [14] ;
signed char arr_14 [14] ;
long long int arr_17 [14] [14] ;
signed char arr_26 [14] ;
unsigned long long int arr_39 [14] [14] [14] [14] [14] [14] [14] ;
int arr_40 [14] [14] [14] [14] [14] ;
short arr_49 [14] [14] [14] [14] [14] [14] [14] ;
unsigned short arr_50 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 1754947395U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 5312628956732390011ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (short)4727;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = 13272049496255516990ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = 6917420356785779852LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (unsigned short)36786;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_54 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)20778;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 2022304858U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_17 [i_0] [i_1] = 4465711249022606541LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_26 [i_0] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 15432707874570435464ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = -1306173744;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)12599;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_50 [i_0] = (unsigned short)53412;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                hash(&seed, arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_50 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
