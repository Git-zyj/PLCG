#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-21;
int var_4 = -755698342;
signed char var_5 = (signed char)67;
signed char var_6 = (signed char)64;
unsigned long long int var_7 = 14407676505178236202ULL;
short var_9 = (short)-26174;
short var_10 = (short)-10103;
unsigned long long int var_12 = 210979110125821268ULL;
int var_13 = 479438575;
int zero = 0;
unsigned short var_14 = (unsigned short)11135;
_Bool var_15 = (_Bool)1;
short var_16 = (short)32252;
signed char var_17 = (signed char)85;
unsigned long long int var_18 = 16846239655915410614ULL;
int var_19 = -715500480;
unsigned long long int var_20 = 233601894351160958ULL;
unsigned long long int arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
int arr_2 [13] ;
_Bool arr_3 [13] ;
signed char arr_4 [13] ;
unsigned char arr_7 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 9609126095253376454ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 9315480083008576627ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -1921829864;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)128 : (unsigned char)161;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
