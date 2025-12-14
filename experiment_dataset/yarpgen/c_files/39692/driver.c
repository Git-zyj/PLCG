#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15489228555234433589ULL;
unsigned int var_4 = 2867774238U;
long long int var_5 = -2815473564794155261LL;
unsigned char var_6 = (unsigned char)215;
unsigned short var_7 = (unsigned short)19810;
unsigned short var_9 = (unsigned short)51394;
_Bool var_10 = (_Bool)0;
short var_11 = (short)27054;
unsigned long long int var_12 = 4956301842781497353ULL;
short var_13 = (short)27823;
unsigned long long int var_15 = 6667934863535455075ULL;
unsigned char var_16 = (unsigned char)102;
signed char var_17 = (signed char)19;
int zero = 0;
unsigned short var_18 = (unsigned short)4326;
unsigned char var_19 = (unsigned char)236;
unsigned char var_20 = (unsigned char)146;
unsigned short var_21 = (unsigned short)29181;
signed char var_22 = (signed char)19;
long long int var_23 = -4620670156653367266LL;
short var_24 = (short)-6405;
unsigned long long int var_25 = 18293985158139012294ULL;
short arr_1 [23] ;
unsigned short arr_4 [23] ;
unsigned char arr_6 [23] [23] [23] ;
unsigned char arr_7 [23] [23] [23] ;
long long int arr_9 [23] ;
long long int arr_10 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)8799;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)11029;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)109 : (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = -5114267037684624783LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 2739948402192824729LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
