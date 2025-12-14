#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3632842527U;
long long int var_4 = -1322890027946864911LL;
unsigned char var_5 = (unsigned char)171;
unsigned int var_9 = 3006311527U;
int zero = 0;
unsigned char var_10 = (unsigned char)18;
short var_11 = (short)10219;
short var_12 = (short)-9133;
short var_13 = (short)15405;
unsigned int var_14 = 3234470433U;
unsigned long long int var_15 = 11822344428653473721ULL;
unsigned char var_16 = (unsigned char)53;
short var_17 = (short)-22672;
long long int var_18 = 5258761559297453317LL;
long long int var_19 = 3097231441345921181LL;
unsigned long long int arr_3 [10] [10] [10] ;
short arr_5 [10] [10] [10] [10] ;
short arr_7 [13] ;
short arr_10 [20] ;
unsigned long long int arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 7297426698970379372ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)-6003;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (short)-21680;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (short)20986;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 15861772766945495540ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
