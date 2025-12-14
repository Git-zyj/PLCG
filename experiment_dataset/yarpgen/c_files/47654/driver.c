#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3432609534U;
long long int var_1 = 6662132537692244296LL;
unsigned char var_3 = (unsigned char)217;
unsigned char var_9 = (unsigned char)203;
long long int var_11 = -7710727820333925920LL;
long long int var_12 = 7453247265816846025LL;
unsigned char var_13 = (unsigned char)105;
short var_14 = (short)2569;
unsigned int var_16 = 2185533182U;
int zero = 0;
long long int var_17 = 4591493023978667740LL;
unsigned int var_18 = 1313493372U;
short var_19 = (short)-24592;
long long int var_20 = 6386675548999507629LL;
unsigned char arr_2 [12] ;
short arr_3 [12] ;
unsigned int arr_6 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)21741;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3089468103U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
