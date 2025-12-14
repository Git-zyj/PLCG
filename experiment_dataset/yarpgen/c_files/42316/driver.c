#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38733;
unsigned short var_1 = (unsigned short)48783;
unsigned int var_2 = 77267262U;
unsigned short var_3 = (unsigned short)62128;
unsigned long long int var_4 = 14465898950612818504ULL;
short var_5 = (short)-2247;
signed char var_6 = (signed char)-54;
short var_7 = (short)-18031;
signed char var_8 = (signed char)75;
unsigned long long int var_9 = 1954856270522249104ULL;
int zero = 0;
unsigned long long int var_10 = 13447704544954577520ULL;
unsigned char var_11 = (unsigned char)172;
signed char var_12 = (signed char)-50;
unsigned int var_13 = 3400965290U;
unsigned short var_14 = (unsigned short)25964;
unsigned char var_15 = (unsigned char)14;
short var_16 = (short)27575;
short var_17 = (short)23674;
unsigned char var_18 = (unsigned char)195;
signed char var_19 = (signed char)70;
unsigned short arr_15 [15] [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)18045;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
