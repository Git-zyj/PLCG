#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4552375085846312102LL;
unsigned short var_2 = (unsigned short)11715;
int var_7 = -311938432;
unsigned char var_8 = (unsigned char)253;
unsigned long long int var_11 = 15186219772475643133ULL;
int zero = 0;
short var_19 = (short)10643;
long long int var_20 = -5115879653946209306LL;
unsigned int var_21 = 2979749065U;
unsigned char var_22 = (unsigned char)95;
unsigned long long int var_23 = 2665413389698226575ULL;
short var_24 = (short)29640;
unsigned short var_25 = (unsigned short)60139;
unsigned char var_26 = (unsigned char)98;
unsigned long long int arr_3 [18] [18] [18] ;
unsigned int arr_4 [18] [18] [18] ;
unsigned long long int arr_5 [18] ;
unsigned long long int arr_8 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 15654162165912403887ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 662875415U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 12849710059972203638ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 6891534919044704788ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
