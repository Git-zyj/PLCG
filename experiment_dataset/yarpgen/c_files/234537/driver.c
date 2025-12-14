#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 742218183262072811ULL;
signed char var_1 = (signed char)122;
unsigned char var_5 = (unsigned char)157;
_Bool var_6 = (_Bool)0;
long long int var_8 = -7986074121262962400LL;
signed char var_10 = (signed char)18;
short var_11 = (short)-6535;
unsigned short var_12 = (unsigned short)63801;
short var_13 = (short)-249;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)178;
unsigned char var_17 = (unsigned char)71;
unsigned char var_18 = (unsigned char)121;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)47;
unsigned int var_22 = 1974913892U;
signed char var_23 = (signed char)-76;
signed char var_24 = (signed char)-95;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)1;
signed char var_27 = (signed char)-48;
unsigned int var_28 = 1838375647U;
int var_29 = -1575057647;
unsigned short var_30 = (unsigned short)4353;
signed char arr_1 [15] ;
signed char arr_4 [15] ;
_Bool arr_8 [15] [15] ;
signed char arr_16 [15] [15] ;
unsigned int arr_26 [22] ;
unsigned short arr_31 [22] [22] ;
unsigned int arr_13 [15] ;
long long int arr_24 [15] [15] [15] [15] [15] [15] [15] ;
unsigned int arr_25 [15] [15] [15] ;
unsigned short arr_28 [22] ;
unsigned short arr_33 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)107 : (signed char)-19;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = 3434849884U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned short)27794;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = 3462811058U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? 4203421954914397311LL : 3624825459522248401LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 1595794913U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = (unsigned short)14017;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (unsigned short)65094;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
