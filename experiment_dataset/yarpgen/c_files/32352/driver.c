#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
signed char var_1 = (signed char)13;
short var_2 = (short)11569;
int var_3 = 1667746104;
int var_4 = 1257221535;
unsigned char var_5 = (unsigned char)70;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 5147546569388496332ULL;
long long int var_8 = 6528679277473693532LL;
unsigned long long int var_9 = 9843635159953725963ULL;
int var_10 = 713072941;
unsigned char var_12 = (unsigned char)8;
signed char var_13 = (signed char)63;
int zero = 0;
int var_14 = -1702750392;
long long int var_15 = 3070354660438817337LL;
unsigned char var_16 = (unsigned char)51;
unsigned long long int var_17 = 12169499905258298896ULL;
unsigned char var_18 = (unsigned char)185;
int var_19 = 2051406900;
unsigned char var_20 = (unsigned char)5;
unsigned long long int var_21 = 8211322719760151431ULL;
signed char var_22 = (signed char)62;
unsigned char var_23 = (unsigned char)218;
signed char var_24 = (signed char)-104;
signed char var_25 = (signed char)-76;
unsigned long long int var_26 = 597730839466594388ULL;
signed char arr_7 [21] [21] ;
unsigned long long int arr_8 [21] ;
unsigned long long int arr_13 [18] ;
unsigned int arr_16 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)100 : (signed char)-16;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 13564473906799569322ULL : 10355335924275222226ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 9328598873778616201ULL : 1373492665062421224ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = 667467527U;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
