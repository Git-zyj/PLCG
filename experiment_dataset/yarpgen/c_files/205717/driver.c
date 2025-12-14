#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1474222368;
unsigned long long int var_2 = 1050484355489997357ULL;
unsigned int var_3 = 2766876312U;
unsigned long long int var_4 = 12799602224995837770ULL;
signed char var_6 = (signed char)76;
unsigned int var_7 = 1218251240U;
short var_9 = (short)-21489;
unsigned char var_10 = (unsigned char)151;
unsigned char var_13 = (unsigned char)236;
unsigned long long int var_14 = 12156491465989738591ULL;
int zero = 0;
unsigned int var_16 = 4256694370U;
unsigned char var_17 = (unsigned char)141;
short var_18 = (short)26141;
int var_19 = -902843541;
short var_20 = (short)-575;
signed char var_21 = (signed char)-105;
int var_22 = 114146219;
signed char var_23 = (signed char)50;
unsigned long long int arr_7 [24] [24] ;
unsigned char arr_19 [11] [11] [11] ;
signed char arr_20 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 1785362403902487504ULL : 10506545097620200451ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)187 : (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (signed char)42 : (signed char)31;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
