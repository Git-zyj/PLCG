#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1648679518U;
unsigned int var_2 = 127816935U;
unsigned char var_3 = (unsigned char)208;
unsigned int var_4 = 2917060698U;
unsigned char var_5 = (unsigned char)221;
unsigned int var_6 = 2856374262U;
unsigned int var_7 = 2463924018U;
unsigned char var_8 = (unsigned char)208;
unsigned int var_9 = 2563831788U;
unsigned int var_12 = 3819109569U;
int zero = 0;
unsigned int var_13 = 2786803360U;
unsigned char var_14 = (unsigned char)21;
unsigned char var_15 = (unsigned char)248;
unsigned char var_16 = (unsigned char)80;
unsigned int var_17 = 4028328719U;
unsigned int var_18 = 1505905963U;
unsigned int var_19 = 3346569708U;
unsigned int var_20 = 485057889U;
unsigned char var_21 = (unsigned char)78;
unsigned int var_22 = 3440127101U;
unsigned int var_23 = 2022998229U;
unsigned int var_24 = 2007102076U;
unsigned char arr_3 [24] ;
unsigned char arr_6 [16] [16] [16] ;
unsigned char arr_9 [16] [16] [16] [16] ;
unsigned int arr_10 [16] [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 327091185U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
