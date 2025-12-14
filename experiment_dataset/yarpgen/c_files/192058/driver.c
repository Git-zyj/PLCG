#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)225;
unsigned short var_3 = (unsigned short)34286;
unsigned char var_4 = (unsigned char)163;
unsigned char var_6 = (unsigned char)119;
unsigned long long int var_7 = 13270818400033082200ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)113;
unsigned int var_12 = 2056904997U;
unsigned char var_13 = (unsigned char)2;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 3222043830U;
signed char var_18 = (signed char)2;
unsigned int var_19 = 4260534927U;
unsigned char var_20 = (unsigned char)161;
_Bool var_21 = (_Bool)1;
unsigned long long int arr_2 [13] ;
unsigned long long int arr_6 [13] [13] ;
short arr_9 [13] ;
unsigned char arr_12 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 11720328149525839398ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 12257704002063432506ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)3053 : (short)-25736;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)27 : (unsigned char)16;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
