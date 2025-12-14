#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 455925898;
long long int var_1 = 8868984769979901006LL;
int var_2 = 990769604;
short var_3 = (short)28097;
int var_4 = 1513684815;
int var_5 = 1067380694;
int var_6 = -671331569;
unsigned long long int var_8 = 17688913062198921740ULL;
signed char var_9 = (signed char)77;
int var_11 = -1192218115;
signed char var_12 = (signed char)24;
short var_15 = (short)-11;
int zero = 0;
short var_16 = (short)-11937;
short var_17 = (short)31375;
short var_18 = (short)-2465;
long long int var_19 = 7411238393953080145LL;
short var_20 = (short)-23651;
signed char var_21 = (signed char)-7;
short var_22 = (short)-8721;
int var_23 = 1155735367;
int arr_0 [15] [15] ;
long long int arr_1 [15] [15] ;
long long int arr_4 [16] ;
int arr_5 [16] ;
signed char arr_7 [16] [16] ;
long long int arr_9 [16] [16] [16] ;
short arr_11 [19] ;
int arr_3 [15] [15] ;
signed char arr_10 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 959263897;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 4383012039888282768LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 7639025565565017237LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 1902095504;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 4167850045155016063LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)22998 : (short)22865;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 1003563247;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-125 : (signed char)-113;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
