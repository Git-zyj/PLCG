#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5600444685008513193LL;
int var_3 = 870645758;
unsigned int var_5 = 2537262980U;
signed char var_7 = (signed char)104;
unsigned char var_8 = (unsigned char)71;
unsigned int var_9 = 4134064905U;
unsigned char var_10 = (unsigned char)237;
int zero = 0;
unsigned char var_11 = (unsigned char)203;
unsigned short var_12 = (unsigned short)53271;
unsigned long long int var_13 = 2234969023517310514ULL;
short var_14 = (short)-31884;
unsigned short var_15 = (unsigned short)18619;
int var_16 = -1418644945;
short var_17 = (short)2616;
unsigned short var_18 = (unsigned short)62406;
unsigned int var_19 = 725102792U;
unsigned char var_20 = (unsigned char)207;
unsigned int var_21 = 3994433288U;
unsigned char var_22 = (unsigned char)105;
signed char var_23 = (signed char)-2;
unsigned short var_24 = (unsigned short)4112;
unsigned short var_25 = (unsigned short)22708;
short arr_1 [21] ;
unsigned char arr_2 [21] [21] ;
unsigned short arr_4 [21] ;
_Bool arr_5 [21] [21] ;
unsigned char arr_10 [21] ;
unsigned int arr_17 [24] ;
unsigned long long int arr_18 [24] ;
signed char arr_19 [24] ;
short arr_20 [24] ;
unsigned char arr_24 [24] ;
unsigned char arr_8 [21] [21] ;
unsigned long long int arr_11 [21] ;
unsigned char arr_12 [21] [21] [21] ;
unsigned int arr_15 [21] [21] [21] ;
_Bool arr_16 [21] ;
unsigned short arr_21 [24] ;
signed char arr_22 [24] ;
unsigned long long int arr_26 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-28816;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned short)60777;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)159 : (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 774027494U : 1338137529U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 10613154678315104375ULL : 17314900205843928117ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (short)-7199 : (short)5524;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)56 : (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 8535863029200314303ULL : 1172308466063592874ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)251 : (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4149199387U : 4069760746U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned short)1535 : (unsigned short)33304;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)27 : (signed char)29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = 3787502955775978255ULL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
