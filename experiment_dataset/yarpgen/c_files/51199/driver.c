#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)21;
unsigned char var_5 = (unsigned char)100;
unsigned long long int var_6 = 10266051429102557387ULL;
unsigned long long int var_7 = 11084822743410869890ULL;
long long int var_10 = -5875573946968811387LL;
unsigned short var_12 = (unsigned short)34968;
unsigned int var_15 = 1900603080U;
int zero = 0;
long long int var_19 = 9143224556971251154LL;
_Bool var_20 = (_Bool)1;
int var_21 = -1928309708;
signed char var_22 = (signed char)88;
signed char var_23 = (signed char)-61;
signed char var_24 = (signed char)-20;
unsigned char var_25 = (unsigned char)101;
signed char var_26 = (signed char)73;
unsigned short var_27 = (unsigned short)44702;
signed char var_28 = (signed char)17;
signed char var_29 = (signed char)-111;
int var_30 = 92878951;
int var_31 = -1106524690;
unsigned short var_32 = (unsigned short)45244;
_Bool var_33 = (_Bool)0;
unsigned int var_34 = 3635548831U;
unsigned short var_35 = (unsigned short)31350;
unsigned char arr_0 [17] [17] ;
unsigned long long int arr_1 [17] [17] ;
long long int arr_2 [17] [17] ;
unsigned short arr_3 [17] ;
unsigned char arr_9 [17] [17] [17] ;
unsigned short arr_10 [17] [17] [17] ;
signed char arr_11 [17] [17] [17] ;
unsigned short arr_13 [17] [17] [17] [17] ;
unsigned short arr_14 [17] [17] [17] [17] ;
signed char arr_15 [17] [17] ;
_Bool arr_17 [17] [17] [17] [17] [17] ;
unsigned int arr_19 [17] [17] [17] [17] ;
short arr_5 [17] ;
unsigned short arr_6 [17] ;
int arr_21 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 4845563953752417370ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 6908297888382101648LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)56996;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)61445;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)42884;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned short)18693;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1923103758U : 1184955504U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (short)23866;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned short)25546;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = -1096092804;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
