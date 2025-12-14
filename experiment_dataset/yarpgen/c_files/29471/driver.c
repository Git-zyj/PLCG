#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 869618026;
long long int var_1 = 6397579784027156277LL;
unsigned char var_2 = (unsigned char)107;
unsigned int var_3 = 204463174U;
unsigned char var_4 = (unsigned char)7;
int var_5 = -2086090586;
unsigned char var_6 = (unsigned char)129;
signed char var_7 = (signed char)15;
long long int var_8 = -2436946711682251215LL;
unsigned long long int var_9 = 14307234439126124362ULL;
unsigned long long int var_12 = 11150883000121867789ULL;
unsigned char var_13 = (unsigned char)164;
signed char var_14 = (signed char)-89;
unsigned long long int var_15 = 16030645184394493609ULL;
unsigned char var_16 = (unsigned char)103;
int zero = 0;
unsigned char var_17 = (unsigned char)114;
unsigned char var_18 = (unsigned char)99;
unsigned char var_19 = (unsigned char)222;
long long int var_20 = 7312489973628666678LL;
int var_21 = 907286294;
unsigned long long int var_22 = 7980498002970835374ULL;
int var_23 = 1466055695;
unsigned int var_24 = 983466103U;
long long int var_25 = -8861073934496276322LL;
signed char var_26 = (signed char)-114;
signed char var_27 = (signed char)25;
unsigned int var_28 = 3304255142U;
unsigned int arr_0 [23] [23] ;
unsigned int arr_5 [23] [23] [23] ;
unsigned int arr_6 [23] [23] ;
unsigned long long int arr_8 [23] [23] [23] [23] [23] ;
long long int arr_9 [23] [23] [23] [23] ;
unsigned char arr_12 [23] [23] [23] [23] [23] ;
unsigned long long int arr_21 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 3293886928U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1543443782U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 3295016686U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 6036723094355062769ULL : 17551171563344049783ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 8598930192256613646LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = 5345186954751101172ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
