#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51727;
long long int var_3 = -4948123082553643769LL;
int var_8 = 781709588;
unsigned long long int var_9 = 2792339174256667229ULL;
unsigned char var_15 = (unsigned char)98;
unsigned char var_16 = (unsigned char)93;
int zero = 0;
unsigned int var_17 = 1416369263U;
short var_18 = (short)1031;
unsigned int var_19 = 3475647607U;
unsigned char arr_0 [20] ;
long long int arr_2 [20] ;
unsigned int arr_4 [20] [20] [20] ;
short arr_5 [20] ;
unsigned short arr_6 [20] ;
unsigned long long int arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -3171381637293866630LL : 6495968142226865021LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1878934923U : 2853643983U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (short)-8922;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61225 : (unsigned short)45221;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 7910887375855803757ULL : 15440657573757091124ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
