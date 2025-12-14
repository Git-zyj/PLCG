#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7450;
unsigned char var_4 = (unsigned char)18;
unsigned long long int var_9 = 6276384353198283124ULL;
int var_15 = 383162519;
signed char var_17 = (signed char)-54;
unsigned short var_18 = (unsigned short)12146;
int zero = 0;
unsigned short var_19 = (unsigned short)1884;
unsigned short var_20 = (unsigned short)24235;
unsigned short var_21 = (unsigned short)42169;
short var_22 = (short)-3496;
signed char var_23 = (signed char)48;
unsigned short var_24 = (unsigned short)4626;
unsigned int var_25 = 1649182402U;
int var_26 = 839228777;
int var_27 = -342937058;
unsigned long long int var_28 = 643718460432319877ULL;
long long int var_29 = -1751224885157511510LL;
signed char var_30 = (signed char)-27;
int arr_3 [10] [10] ;
signed char arr_8 [10] [10] [10] [10] ;
int arr_9 [10] [10] [10] [10] [10] ;
unsigned short arr_10 [10] ;
unsigned short arr_14 [10] [10] [10] [10] [10] ;
_Bool arr_15 [14] ;
unsigned short arr_16 [14] ;
short arr_17 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = -1061945489;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 1955246427;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned short)31812;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)13012;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (unsigned short)20176;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)27385 : (short)11118;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
