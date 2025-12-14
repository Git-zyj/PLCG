#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26131;
int var_2 = -916419055;
unsigned long long int var_4 = 15530968760407292387ULL;
unsigned short var_7 = (unsigned short)42295;
unsigned short var_10 = (unsigned short)45283;
int var_12 = -1617601371;
unsigned short var_13 = (unsigned short)15998;
unsigned short var_15 = (unsigned short)45666;
unsigned long long int var_16 = 16285289106980871165ULL;
unsigned long long int var_18 = 243158429356311920ULL;
int zero = 0;
int var_20 = -162485393;
unsigned long long int var_21 = 13117611040935329591ULL;
int var_22 = 1650808495;
unsigned short var_23 = (unsigned short)64197;
int var_24 = -2119983807;
unsigned long long int var_25 = 1714775063908528356ULL;
int var_26 = -756121261;
unsigned long long int arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 16673903761098261244ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
