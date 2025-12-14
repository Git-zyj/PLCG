#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3271806624U;
unsigned int var_3 = 110139729U;
unsigned int var_4 = 950510969U;
unsigned int var_5 = 3835876973U;
unsigned char var_6 = (unsigned char)203;
unsigned int var_7 = 2078328826U;
unsigned int var_8 = 2916044231U;
unsigned int var_10 = 1520404337U;
unsigned int var_11 = 3938505484U;
unsigned char var_12 = (unsigned char)6;
int zero = 0;
unsigned int var_18 = 2498521697U;
unsigned char var_19 = (unsigned char)224;
unsigned int var_20 = 1722459132U;
unsigned char var_21 = (unsigned char)125;
unsigned char var_22 = (unsigned char)193;
unsigned int var_23 = 2366071684U;
unsigned char var_24 = (unsigned char)142;
unsigned char var_25 = (unsigned char)169;
unsigned char var_26 = (unsigned char)159;
unsigned char var_27 = (unsigned char)245;
unsigned char arr_0 [25] ;
unsigned int arr_1 [25] ;
unsigned int arr_3 [21] ;
unsigned int arr_4 [21] [21] ;
unsigned int arr_6 [21] ;
unsigned char arr_7 [21] [21] [21] ;
unsigned int arr_10 [21] [21] [21] ;
unsigned int arr_11 [21] [21] [21] ;
unsigned char arr_5 [21] ;
unsigned int arr_12 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 506861334U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2406155395U : 380447018U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 2320498869U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 1832124721U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)243 : (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 350557526U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1810377504U : 1532448921U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)72 : (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2863390408U : 3636323747U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
