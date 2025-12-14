#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
signed char var_1 = (signed char)99;
signed char var_3 = (signed char)-121;
unsigned long long int var_6 = 12806407483632116032ULL;
unsigned char var_7 = (unsigned char)134;
unsigned long long int var_8 = 13112891351450889254ULL;
unsigned char var_9 = (unsigned char)241;
unsigned long long int var_10 = 17862495561349183953ULL;
unsigned char var_11 = (unsigned char)63;
unsigned int var_12 = 2765138237U;
signed char var_14 = (signed char)115;
unsigned char var_16 = (unsigned char)240;
unsigned char var_17 = (unsigned char)154;
int zero = 0;
unsigned long long int var_20 = 17115034406249092393ULL;
unsigned char var_21 = (unsigned char)251;
unsigned char var_22 = (unsigned char)245;
unsigned int var_23 = 1355781268U;
signed char var_24 = (signed char)-93;
signed char var_25 = (signed char)34;
unsigned char var_26 = (unsigned char)47;
unsigned char arr_1 [21] ;
unsigned long long int arr_7 [21] [21] [21] ;
unsigned char arr_8 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 9685920115998008905ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)81;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
