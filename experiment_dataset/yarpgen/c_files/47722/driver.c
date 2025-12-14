#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)17791;
unsigned long long int var_8 = 15604994676623526754ULL;
unsigned long long int var_10 = 10483301887516000989ULL;
signed char var_12 = (signed char)-27;
unsigned short var_13 = (unsigned short)20983;
short var_19 = (short)-27006;
int zero = 0;
unsigned long long int var_20 = 12575121099495344911ULL;
unsigned long long int var_21 = 15156855240834161386ULL;
int var_22 = -1301508409;
_Bool var_23 = (_Bool)0;
unsigned char arr_0 [16] ;
unsigned long long int arr_1 [16] ;
signed char arr_2 [16] [16] ;
_Bool arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 7024513196233982166ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
