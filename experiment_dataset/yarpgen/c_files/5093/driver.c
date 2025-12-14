#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3768691881423294197ULL;
unsigned long long int var_3 = 7034151947720831267ULL;
unsigned long long int var_12 = 17837386378875116659ULL;
unsigned long long int var_14 = 12964930437053651865ULL;
unsigned int var_16 = 63064371U;
unsigned int var_17 = 4125615774U;
int zero = 0;
unsigned long long int var_19 = 690283653824456970ULL;
unsigned int var_20 = 2820963847U;
unsigned int var_21 = 2668319995U;
unsigned int var_22 = 735229345U;
unsigned int var_23 = 1924271704U;
unsigned int var_24 = 2666230059U;
unsigned long long int arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned long long int arr_3 [10] [10] ;
unsigned long long int arr_5 [10] ;
unsigned long long int arr_12 [10] [10] [10] [10] [10] [10] ;
unsigned long long int arr_14 [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 12117366725256117638ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 18144743871347366926ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 2330585198185716596ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 6070363684449769922ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 5731489305225805661ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 2853301781191993822ULL : 3035607777476599797ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
