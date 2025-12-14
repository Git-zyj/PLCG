#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3842629254U;
signed char var_2 = (signed char)-80;
unsigned int var_3 = 2938315403U;
unsigned int var_4 = 2533751822U;
unsigned long long int var_5 = 10645958733420278758ULL;
unsigned char var_6 = (unsigned char)196;
unsigned int var_7 = 3849688359U;
int var_8 = 2113035586;
unsigned short var_9 = (unsigned short)1793;
unsigned short var_10 = (unsigned short)3044;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2345739508U;
long long int var_14 = -7497856269552151673LL;
unsigned long long int var_15 = 4906767807956340224ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)11058;
signed char arr_0 [17] [17] ;
signed char arr_1 [17] ;
unsigned int arr_3 [17] [17] ;
short arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 1851563648U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-7287;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
