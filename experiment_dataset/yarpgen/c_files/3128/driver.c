#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)81;
signed char var_1 = (signed char)-54;
int var_2 = -1063327370;
unsigned short var_3 = (unsigned short)25040;
unsigned long long int var_4 = 2250232162181581906ULL;
unsigned long long int var_5 = 9461979102341920601ULL;
unsigned char var_7 = (unsigned char)139;
unsigned char var_8 = (unsigned char)240;
unsigned long long int var_9 = 106595655281303966ULL;
short var_10 = (short)-1884;
unsigned short var_11 = (unsigned short)54022;
unsigned long long int var_12 = 10955282504778203412ULL;
signed char var_13 = (signed char)41;
int zero = 0;
unsigned long long int var_14 = 11697945746502539760ULL;
signed char var_15 = (signed char)21;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)50;
long long int var_19 = -4300460182927722634LL;
unsigned long long int var_20 = 115753192855471014ULL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)11006;
unsigned char var_23 = (unsigned char)172;
short var_24 = (short)1524;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 8802435084020650649ULL;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)55776;
long long int var_30 = -1995233561401171807LL;
unsigned short var_31 = (unsigned short)1938;
long long int var_32 = -4784394465743935889LL;
unsigned short arr_1 [21] ;
int arr_3 [22] ;
int arr_4 [22] [22] ;
long long int arr_6 [22] ;
signed char arr_7 [22] [22] ;
unsigned long long int arr_9 [22] [22] [22] ;
signed char arr_11 [22] [22] [22] [22] ;
unsigned short arr_12 [22] ;
unsigned short arr_14 [22] [22] [22] ;
_Bool arr_15 [22] [22] ;
short arr_18 [22] [22] [22] [22] [22] ;
unsigned long long int arr_21 [22] [22] [22] [22] ;
unsigned long long int arr_24 [22] ;
short arr_5 [22] [22] ;
unsigned short arr_13 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)35540;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 637859250;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -2072850328;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 57806561722839769LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 3675271825537577995ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (unsigned short)54334;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)37288;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)16062;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 3347458962717329925ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = 3576078369330716247ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (short)1360;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)55974;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
