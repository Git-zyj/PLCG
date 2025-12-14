#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22637;
unsigned int var_4 = 1062171697U;
signed char var_6 = (signed char)-83;
signed char var_8 = (signed char)-121;
short var_10 = (short)-12991;
signed char var_11 = (signed char)124;
unsigned long long int var_13 = 1389982482092774650ULL;
short var_14 = (short)-1512;
long long int var_15 = 1390642821537526484LL;
int zero = 0;
unsigned short var_16 = (unsigned short)15042;
unsigned int var_17 = 322201482U;
unsigned short var_18 = (unsigned short)29241;
unsigned long long int var_19 = 13814998301864532598ULL;
long long int var_20 = 5143522933736403125LL;
unsigned int var_21 = 3567203962U;
long long int var_22 = 597752297524197088LL;
signed char var_23 = (signed char)-92;
unsigned short var_24 = (unsigned short)10157;
short var_25 = (short)29636;
long long int arr_1 [13] [13] ;
long long int arr_3 [15] ;
signed char arr_4 [15] ;
int arr_5 [15] [15] ;
short arr_6 [15] ;
unsigned int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -6955482435091321905LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 480286314415101557LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = -1882215466;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)-9562;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1613246028U;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
