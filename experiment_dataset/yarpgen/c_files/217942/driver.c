#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -33093552;
unsigned char var_2 = (unsigned char)66;
int var_3 = 643789902;
signed char var_4 = (signed char)118;
unsigned long long int var_5 = 11337345016060403406ULL;
short var_6 = (short)15501;
unsigned int var_7 = 2776243794U;
signed char var_8 = (signed char)-74;
unsigned int var_10 = 3147785503U;
unsigned int var_11 = 1238756739U;
int var_13 = 23492001;
_Bool var_14 = (_Bool)1;
short var_16 = (short)-16123;
unsigned char var_17 = (unsigned char)100;
int var_18 = 165517068;
int zero = 0;
unsigned short var_19 = (unsigned short)39906;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 6405076689993994618ULL;
int var_22 = -1969575892;
unsigned short var_23 = (unsigned short)24293;
int var_24 = -1145676923;
int var_25 = 1060098415;
unsigned char var_26 = (unsigned char)106;
unsigned char arr_5 [22] ;
int arr_10 [22] [22] ;
signed char arr_11 [22] [22] [22] [22] ;
int arr_12 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)6 : (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? -2002083041 : 1075152210;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)10 : (signed char)116;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 1731293828 : 116383203;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
