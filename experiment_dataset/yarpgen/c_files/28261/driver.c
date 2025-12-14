#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1355;
unsigned char var_1 = (unsigned char)155;
signed char var_2 = (signed char)16;
int var_3 = 1431114600;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 2055617688475176940ULL;
unsigned long long int var_6 = 4835285353488265696ULL;
int var_7 = -1396547574;
int var_8 = 39825710;
unsigned short var_9 = (unsigned short)33276;
int var_10 = -805591559;
int zero = 0;
unsigned short var_11 = (unsigned short)27615;
_Bool var_12 = (_Bool)1;
long long int var_13 = 7958219364755955765LL;
int var_14 = -2049816994;
int var_15 = -1001260356;
_Bool var_16 = (_Bool)0;
int var_17 = -1623747153;
signed char var_18 = (signed char)61;
short var_19 = (short)3905;
int var_20 = 1159218298;
unsigned long long int var_21 = 18194472694280551907ULL;
int var_22 = 1763949898;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)4778;
_Bool var_26 = (_Bool)0;
short var_27 = (short)20152;
int var_28 = -1121585499;
unsigned char arr_0 [23] ;
_Bool arr_1 [23] ;
unsigned long long int arr_2 [23] [23] ;
_Bool arr_4 [23] ;
int arr_7 [23] ;
unsigned char arr_9 [23] ;
unsigned char arr_11 [23] [23] [23] ;
_Bool arr_12 [23] ;
int arr_15 [23] [23] [23] ;
int arr_3 [23] [23] ;
unsigned long long int arr_6 [23] ;
signed char arr_10 [23] ;
unsigned long long int arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 16906118969203952727ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 208611956;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -1219081634;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 1392921999;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 4825141297827486586ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 17365748156516118805ULL;
}

void checksum() {
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
