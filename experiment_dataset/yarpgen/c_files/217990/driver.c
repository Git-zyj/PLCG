#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60944;
unsigned char var_2 = (unsigned char)95;
long long int var_5 = -6859887724497669540LL;
unsigned char var_6 = (unsigned char)224;
int var_7 = 27203707;
signed char var_9 = (signed char)32;
unsigned long long int var_10 = 16371636734075050327ULL;
_Bool var_11 = (_Bool)1;
unsigned char var_14 = (unsigned char)116;
_Bool var_15 = (_Bool)0;
long long int var_16 = -3557450108257555978LL;
int zero = 0;
unsigned long long int var_18 = 3757285195839540121ULL;
short var_19 = (short)-11631;
signed char var_20 = (signed char)123;
_Bool var_21 = (_Bool)1;
unsigned short arr_0 [20] ;
int arr_1 [20] ;
signed char arr_4 [20] [20] [20] ;
short arr_5 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)32509;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -694655691;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-17431;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
