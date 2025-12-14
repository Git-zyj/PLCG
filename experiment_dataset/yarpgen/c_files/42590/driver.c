#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 227365212;
int var_3 = 512329531;
unsigned long long int var_4 = 12505251811174783934ULL;
signed char var_5 = (signed char)108;
signed char var_7 = (signed char)-62;
unsigned int var_9 = 4181538696U;
int zero = 0;
int var_12 = 2027388946;
unsigned int var_13 = 2070864940U;
unsigned int var_14 = 3820740383U;
unsigned long long int var_15 = 12069553127641582297ULL;
short var_16 = (short)6675;
unsigned long long int var_17 = 12618771667743428728ULL;
unsigned long long int var_18 = 11526171606941029968ULL;
unsigned short var_19 = (unsigned short)41531;
short arr_0 [25] [25] ;
unsigned short arr_1 [25] [25] ;
unsigned long long int arr_2 [25] ;
unsigned long long int arr_3 [25] [25] ;
signed char arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (short)27853;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)7466;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 7178575641543745312ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 13851663397994916258ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)27;
}

void checksum() {
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
