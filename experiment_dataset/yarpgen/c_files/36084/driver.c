#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1059494435U;
unsigned char var_1 = (unsigned char)182;
unsigned char var_4 = (unsigned char)78;
unsigned char var_7 = (unsigned char)143;
unsigned int var_8 = 3794810158U;
unsigned char var_9 = (unsigned char)240;
unsigned int var_10 = 2325295020U;
unsigned int var_12 = 2572785167U;
unsigned int var_13 = 4002487916U;
unsigned char var_14 = (unsigned char)196;
int zero = 0;
unsigned char var_16 = (unsigned char)7;
unsigned char var_17 = (unsigned char)182;
unsigned int var_18 = 3280033058U;
unsigned int var_19 = 692381264U;
unsigned int var_20 = 2465912006U;
unsigned char var_21 = (unsigned char)168;
unsigned char var_22 = (unsigned char)34;
unsigned int var_23 = 718960062U;
unsigned char var_24 = (unsigned char)231;
unsigned char var_25 = (unsigned char)87;
unsigned char var_26 = (unsigned char)39;
unsigned int var_27 = 2380596300U;
unsigned char var_28 = (unsigned char)108;
unsigned char var_29 = (unsigned char)182;
unsigned char var_30 = (unsigned char)59;
unsigned int arr_0 [25] [25] ;
unsigned char arr_1 [25] [25] ;
unsigned char arr_2 [25] ;
unsigned int arr_3 [25] ;
unsigned char arr_4 [25] ;
unsigned char arr_5 [25] ;
unsigned char arr_6 [25] [25] ;
unsigned int arr_12 [25] [25] [25] ;
unsigned char arr_13 [25] ;
unsigned char arr_14 [25] ;
unsigned char arr_17 [21] ;
unsigned int arr_18 [21] ;
unsigned int arr_7 [25] [25] [25] ;
unsigned char arr_11 [25] [25] ;
unsigned int arr_16 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 759176576U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 4226791971U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 3843984898U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = 2948215805U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3273728165U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = 2637847257U;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
