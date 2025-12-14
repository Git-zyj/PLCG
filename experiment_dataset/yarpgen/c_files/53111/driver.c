#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
unsigned int var_1 = 2649340978U;
signed char var_2 = (signed char)8;
unsigned char var_6 = (unsigned char)46;
unsigned long long int var_8 = 2330934448029823589ULL;
unsigned char var_9 = (unsigned char)165;
unsigned long long int var_10 = 5711053721370195343ULL;
short var_11 = (short)18407;
unsigned char var_13 = (unsigned char)60;
signed char var_16 = (signed char)19;
unsigned int var_18 = 563867565U;
int zero = 0;
unsigned int var_19 = 348915822U;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1538796627U;
signed char var_22 = (signed char)93;
unsigned char var_23 = (unsigned char)125;
unsigned char var_24 = (unsigned char)30;
unsigned int var_25 = 3423029442U;
_Bool var_26 = (_Bool)1;
signed char arr_1 [15] ;
unsigned char arr_2 [15] [15] ;
unsigned char arr_3 [15] ;
signed char arr_5 [15] [15] [15] ;
short arr_6 [15] ;
signed char arr_7 [15] ;
unsigned char arr_4 [15] ;
unsigned int arr_12 [13] ;
unsigned int arr_13 [13] ;
short arr_16 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)-29994;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)58 : (signed char)-126;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 4207303252U : 3799256333U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 3639683720U : 4222903267U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (short)17465;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
