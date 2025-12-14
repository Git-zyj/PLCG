#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10909;
unsigned short var_3 = (unsigned short)27564;
short var_4 = (short)18771;
signed char var_5 = (signed char)-27;
short var_6 = (short)-13463;
unsigned short var_7 = (unsigned short)47597;
signed char var_9 = (signed char)81;
unsigned short var_10 = (unsigned short)28903;
int zero = 0;
signed char var_14 = (signed char)-2;
unsigned short var_15 = (unsigned short)38874;
short var_16 = (short)-13692;
unsigned short var_17 = (unsigned short)54584;
signed char arr_0 [14] [14] ;
unsigned short arr_1 [14] ;
short arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)23336;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (short)32676;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
