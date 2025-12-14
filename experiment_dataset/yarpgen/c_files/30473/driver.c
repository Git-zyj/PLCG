#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60260;
unsigned short var_7 = (unsigned short)48825;
unsigned short var_8 = (unsigned short)39502;
unsigned short var_11 = (unsigned short)58917;
unsigned short var_12 = (unsigned short)50534;
unsigned short var_14 = (unsigned short)53145;
unsigned short var_15 = (unsigned short)9200;
int zero = 0;
unsigned short var_16 = (unsigned short)32229;
unsigned short var_17 = (unsigned short)14115;
unsigned short var_18 = (unsigned short)62644;
unsigned short var_19 = (unsigned short)39502;
unsigned short var_20 = (unsigned short)13559;
unsigned short arr_2 [21] ;
unsigned short arr_3 [21] [21] [21] ;
unsigned short arr_4 [21] [21] [21] ;
unsigned short arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)65159;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)27280;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)3067 : (unsigned short)13875;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11952 : (unsigned short)38287;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
