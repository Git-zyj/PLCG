#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7778757378128108617ULL;
signed char var_4 = (signed char)25;
unsigned long long int var_5 = 6933044544560007429ULL;
unsigned long long int var_6 = 6629620830884272390ULL;
unsigned short var_7 = (unsigned short)55095;
signed char var_8 = (signed char)-88;
unsigned long long int var_9 = 15060389668459902258ULL;
unsigned short var_10 = (unsigned short)55112;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned char var_17 = (unsigned char)17;
int zero = 0;
unsigned short var_19 = (unsigned short)52717;
unsigned char var_20 = (unsigned char)55;
unsigned long long int var_21 = 12086325803830755140ULL;
unsigned short var_22 = (unsigned short)35706;
unsigned short var_23 = (unsigned short)47682;
unsigned short var_24 = (unsigned short)36791;
unsigned long long int var_25 = 6366635970816793420ULL;
_Bool var_26 = (_Bool)0;
short var_27 = (short)-13402;
unsigned int arr_10 [10] [10] [10] ;
unsigned short arr_11 [10] ;
unsigned char arr_14 [10] [10] ;
unsigned char arr_19 [10] [10] [10] ;
unsigned short arr_20 [10] ;
unsigned char arr_21 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 2652689815U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned short)14066;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (unsigned short)1224;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = (unsigned char)177;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
