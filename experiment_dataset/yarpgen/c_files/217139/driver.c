#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4931121581909360081LL;
unsigned int var_1 = 174245700U;
signed char var_2 = (signed char)-41;
unsigned long long int var_6 = 5139329870997152766ULL;
short var_12 = (short)9931;
int var_14 = 502879542;
unsigned int var_15 = 4062753341U;
unsigned int var_16 = 1730843093U;
int zero = 0;
unsigned short var_18 = (unsigned short)59014;
unsigned int var_19 = 2133319354U;
short var_20 = (short)27994;
signed char var_21 = (signed char)125;
signed char arr_5 [24] [24] [24] ;
signed char arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-38 : (signed char)-89;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)109 : (signed char)-27;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
