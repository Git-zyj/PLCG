#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53797;
short var_2 = (short)-4729;
unsigned int var_3 = 704050025U;
int var_4 = -1940098711;
int var_5 = -749389838;
unsigned short var_6 = (unsigned short)52396;
unsigned char var_7 = (unsigned char)214;
unsigned short var_8 = (unsigned short)50889;
unsigned short var_9 = (unsigned short)51805;
int zero = 0;
unsigned int var_10 = 3279588313U;
unsigned char var_11 = (unsigned char)185;
unsigned long long int var_12 = 17652469430109776544ULL;
long long int var_13 = -9049773485153516038LL;
unsigned short var_14 = (unsigned short)24651;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)217;
unsigned short var_17 = (unsigned short)16765;
short var_18 = (short)-17408;
short var_19 = (short)10834;
unsigned short var_20 = (unsigned short)45794;
long long int var_21 = 7728142046851850399LL;
short var_22 = (short)15849;
long long int var_23 = -4766182236063437928LL;
unsigned int arr_0 [23] ;
_Bool arr_1 [23] ;
unsigned long long int arr_7 [10] ;
int arr_10 [10] [10] [10] [10] [10] [10] ;
unsigned char arr_11 [10] [10] [10] [10] ;
signed char arr_15 [10] [10] [10] [10] [10] [10] ;
unsigned char arr_20 [22] ;
unsigned char arr_22 [22] [22] ;
signed char arr_27 [22] ;
_Bool arr_28 [22] [22] [22] ;
unsigned long long int arr_2 [23] ;
_Bool arr_16 [10] ;
_Bool arr_17 [10] [10] [10] [10] [10] ;
_Bool arr_18 [10] [10] [10] [10] [10] ;
_Bool arr_31 [22] ;
int arr_35 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3453984455U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 8287849863132849911ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? -1766116133 : -1948525595;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)255 : (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)115 : (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)164 : (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (signed char)-103 : (signed char)118;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 16770084027121235534ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? -1337622166 : -1769198119;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
