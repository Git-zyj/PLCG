#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49493;
unsigned long long int var_6 = 9306216771131819070ULL;
unsigned short var_8 = (unsigned short)4997;
unsigned int var_9 = 3225162915U;
unsigned short var_10 = (unsigned short)10233;
short var_11 = (short)-27791;
unsigned long long int var_13 = 9522197398518977281ULL;
int zero = 0;
signed char var_15 = (signed char)-100;
unsigned char var_16 = (unsigned char)33;
unsigned char var_17 = (unsigned char)151;
short var_18 = (short)22213;
unsigned long long int var_19 = 438728915479001430ULL;
unsigned char var_20 = (unsigned char)166;
long long int var_21 = 4005400425866587332LL;
unsigned int var_22 = 2321023607U;
long long int var_23 = -729683565674202476LL;
short var_24 = (short)19203;
_Bool arr_4 [16] [16] [16] ;
long long int arr_5 [16] ;
unsigned char arr_6 [16] [16] [16] [16] ;
unsigned int arr_10 [18] [18] ;
unsigned char arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -4014947671658426975LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = 3360783355U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)87 : (unsigned char)187;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
