#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4300428915018399560ULL;
unsigned short var_3 = (unsigned short)33884;
unsigned int var_4 = 1558780544U;
short var_5 = (short)-30672;
unsigned long long int var_6 = 12474956223009965219ULL;
unsigned int var_7 = 524875105U;
unsigned short var_10 = (unsigned short)34340;
unsigned short var_12 = (unsigned short)3288;
long long int var_13 = 2163363028259962096LL;
long long int var_15 = 5076745512349004957LL;
signed char var_16 = (signed char)14;
unsigned short var_17 = (unsigned short)58506;
short var_18 = (short)-17324;
int zero = 0;
long long int var_19 = 8886420762871793218LL;
unsigned short var_20 = (unsigned short)51063;
short var_21 = (short)-19776;
unsigned short var_22 = (unsigned short)11662;
unsigned long long int var_23 = 14920867485387299559ULL;
int var_24 = -389641886;
long long int var_25 = 422160276063684741LL;
unsigned char arr_9 [20] ;
unsigned short arr_17 [20] [20] [20] [20] ;
short arr_18 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)1029;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (short)5456;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
