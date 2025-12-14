#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5814057652825021675ULL;
unsigned short var_2 = (unsigned short)20576;
int var_3 = 551113788;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)-54;
unsigned int var_8 = 88121434U;
unsigned long long int var_9 = 17657793689529133521ULL;
unsigned char var_10 = (unsigned char)117;
signed char var_12 = (signed char)93;
unsigned char var_13 = (unsigned char)26;
int zero = 0;
unsigned char var_14 = (unsigned char)208;
unsigned short var_15 = (unsigned short)21142;
signed char var_16 = (signed char)-15;
unsigned int var_17 = 1893675232U;
unsigned char arr_0 [16] ;
unsigned char arr_1 [16] ;
signed char arr_2 [16] ;
unsigned short arr_6 [16] [16] [16] ;
unsigned char arr_4 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)39093;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)212;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
