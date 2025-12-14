#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4696;
unsigned short var_1 = (unsigned short)20358;
unsigned short var_2 = (unsigned short)25985;
unsigned char var_3 = (unsigned char)188;
unsigned short var_5 = (unsigned short)30686;
signed char var_6 = (signed char)67;
unsigned short var_7 = (unsigned short)36353;
unsigned short var_10 = (unsigned short)29338;
long long int var_11 = 885190585049689813LL;
unsigned long long int var_13 = 10537983877720551094ULL;
signed char var_14 = (signed char)-11;
unsigned short var_15 = (unsigned short)11122;
short var_17 = (short)4059;
int zero = 0;
unsigned short var_19 = (unsigned short)56912;
short var_20 = (short)19325;
unsigned char var_21 = (unsigned char)37;
int var_22 = 1949198195;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-27411;
int var_25 = -392664604;
int var_26 = -1453084586;
unsigned short var_27 = (unsigned short)24205;
int var_28 = 1278651656;
long long int var_29 = 4291006764793012048LL;
long long int var_30 = -890236140847622159LL;
int var_31 = -350823357;
unsigned short var_32 = (unsigned short)56272;
short var_33 = (short)1887;
int var_34 = -1458130381;
unsigned char var_35 = (unsigned char)23;
unsigned char var_36 = (unsigned char)115;
short var_37 = (short)-14418;
signed char var_38 = (signed char)105;
short var_39 = (short)-15011;
unsigned long long int var_40 = 8584881550967352581ULL;
unsigned char var_41 = (unsigned char)132;
unsigned short arr_0 [16] [16] ;
unsigned short arr_1 [16] [16] ;
unsigned short arr_2 [16] [16] ;
short arr_5 [16] ;
long long int arr_8 [16] [16] ;
unsigned short arr_9 [16] [16] ;
unsigned short arr_10 [16] [16] ;
unsigned int arr_17 [16] ;
unsigned int arr_19 [16] ;
int arr_23 [16] [16] [16] [16] ;
unsigned char arr_13 [16] [16] [16] [16] ;
unsigned short arr_14 [16] [16] ;
signed char arr_21 [16] ;
unsigned short arr_27 [16] ;
long long int arr_31 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)5421;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)47061;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)59559;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-1368 : (short)-18653;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = 7003114579918543327LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)15892;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)38807;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = 3944139161U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = 852293548U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = -1616175558;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)20674;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = (unsigned short)64588;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_31 [i_0] = -5736934815721521978LL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
