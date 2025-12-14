#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40118;
unsigned int var_1 = 376256865U;
unsigned int var_2 = 3721639292U;
unsigned int var_3 = 4050050491U;
unsigned short var_5 = (unsigned short)6226;
unsigned short var_6 = (unsigned short)46010;
unsigned int var_7 = 3058117581U;
unsigned int var_8 = 1929781369U;
unsigned short var_9 = (unsigned short)56791;
unsigned short var_10 = (unsigned short)15124;
unsigned short var_11 = (unsigned short)62409;
int zero = 0;
unsigned int var_12 = 3852040048U;
unsigned int var_13 = 3861777604U;
unsigned short var_14 = (unsigned short)39315;
unsigned short var_15 = (unsigned short)41741;
unsigned int var_16 = 1132049187U;
unsigned short var_17 = (unsigned short)11367;
unsigned int var_18 = 1377763246U;
unsigned int arr_0 [17] [17] ;
unsigned int arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 534080812U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1121215471U;
}

void checksum() {
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
