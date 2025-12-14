#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -637343369245061444LL;
unsigned short var_1 = (unsigned short)41889;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)20648;
short var_7 = (short)5041;
signed char var_9 = (signed char)41;
int var_10 = -816705517;
short var_11 = (short)11856;
unsigned short var_12 = (unsigned short)21866;
unsigned int var_15 = 3824744088U;
int zero = 0;
long long int var_18 = 5964203140657078303LL;
unsigned char var_19 = (unsigned char)76;
signed char var_20 = (signed char)110;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 386834845U;
unsigned long long int var_23 = 2340014799453988327ULL;
short arr_0 [17] ;
int arr_6 [17] ;
unsigned char arr_7 [17] [17] [17] [17] ;
unsigned int arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)-18727;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 515782288;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = 950691973U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
