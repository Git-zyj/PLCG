#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 270389415U;
unsigned char var_5 = (unsigned char)18;
short var_6 = (short)8430;
unsigned char var_7 = (unsigned char)246;
unsigned int var_10 = 2459316873U;
short var_11 = (short)-26426;
short var_14 = (short)-4517;
unsigned char var_15 = (unsigned char)225;
int zero = 0;
short var_19 = (short)-15460;
unsigned int var_20 = 2358122912U;
unsigned int var_21 = 1971810071U;
unsigned int var_22 = 836650858U;
unsigned int var_23 = 3546269711U;
unsigned int var_24 = 1938281U;
unsigned int var_25 = 275128095U;
short var_26 = (short)-2741;
unsigned int var_27 = 3752477330U;
unsigned char arr_0 [10] ;
unsigned char arr_2 [10] ;
unsigned int arr_3 [10] [10] ;
short arr_5 [24] ;
unsigned int arr_6 [24] ;
unsigned int arr_9 [24] [24] ;
unsigned int arr_10 [24] ;
short arr_4 [10] ;
unsigned int arr_7 [24] ;
unsigned char arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 3041995823U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)-22691;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 3410879707U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 724956821U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 4037320586U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)1044;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 2424599254U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned char)113;
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
