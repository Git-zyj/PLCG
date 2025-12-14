#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 920702978;
short var_3 = (short)14536;
signed char var_5 = (signed char)88;
unsigned int var_6 = 275354798U;
short var_10 = (short)26735;
int zero = 0;
unsigned char var_11 = (unsigned char)253;
long long int var_12 = 1425817679351824135LL;
short var_13 = (short)-11289;
unsigned short var_14 = (unsigned short)32066;
long long int var_15 = 2419911247983067748LL;
short var_16 = (short)-31034;
unsigned char var_17 = (unsigned char)137;
signed char var_18 = (signed char)4;
short arr_2 [21] [21] ;
unsigned long long int arr_6 [21] [21] [21] ;
int arr_9 [21] ;
short arr_10 [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (short)30252;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 10390589878959817833ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 1162089517;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-474;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
