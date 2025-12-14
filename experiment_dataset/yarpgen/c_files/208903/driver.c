#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8408;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)23129;
int var_5 = 433804810;
unsigned char var_6 = (unsigned char)26;
unsigned short var_7 = (unsigned short)32182;
unsigned char var_8 = (unsigned char)95;
signed char var_9 = (signed char)9;
int zero = 0;
signed char var_10 = (signed char)-30;
int var_11 = 1521378657;
unsigned char var_12 = (unsigned char)50;
short var_13 = (short)32367;
unsigned char var_14 = (unsigned char)177;
int var_15 = 581409622;
signed char var_16 = (signed char)-71;
unsigned char var_17 = (unsigned char)187;
unsigned long long int var_18 = 15188549236924277990ULL;
unsigned long long int var_19 = 16217092391597272591ULL;
short var_20 = (short)10628;
short arr_1 [10] ;
unsigned short arr_2 [10] [10] ;
unsigned short arr_4 [10] [10] [10] ;
signed char arr_7 [10] [10] ;
short arr_8 [10] [10] [10] [10] ;
_Bool arr_9 [10] [10] [10] [10] ;
unsigned long long int arr_10 [10] [10] [10] [10] ;
unsigned long long int arr_14 [13] ;
short arr_15 [13] ;
unsigned short arr_17 [13] ;
unsigned long long int arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-20779;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)58692;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)32559 : (unsigned short)37493;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-3078 : (short)282;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 9179749616493221453ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 708494568955979718ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (short)23859;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (unsigned short)45520;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 9713964389305609910ULL : 11186600716595738802ULL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
