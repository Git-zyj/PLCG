#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)113;
int var_4 = -442043393;
int var_5 = -320674369;
_Bool var_7 = (_Bool)1;
short var_9 = (short)28205;
long long int var_10 = 283610621305294728LL;
int var_12 = -124623096;
unsigned char var_14 = (unsigned char)206;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 1625024359172998827ULL;
long long int var_20 = -4864976847148692756LL;
short var_21 = (short)26966;
long long int var_22 = 5480204359074475848LL;
unsigned int var_23 = 2046636305U;
unsigned int var_24 = 959066011U;
unsigned long long int var_25 = 4837735211054891669ULL;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 1283105434U;
unsigned int var_28 = 3933541047U;
unsigned long long int var_29 = 429282309492618695ULL;
unsigned long long int var_30 = 5155531283785792859ULL;
signed char var_31 = (signed char)-118;
unsigned int var_32 = 1244169297U;
unsigned int var_33 = 2284316740U;
signed char var_34 = (signed char)94;
unsigned long long int var_35 = 8883094733637194807ULL;
int var_36 = 1502837791;
unsigned char var_37 = (unsigned char)0;
int arr_0 [12] ;
long long int arr_1 [12] [12] ;
unsigned int arr_2 [12] [12] ;
int arr_3 [12] [12] ;
unsigned int arr_7 [20] ;
signed char arr_11 [20] ;
_Bool arr_14 [20] [20] [20] [20] ;
unsigned long long int arr_15 [20] [20] [20] [20] ;
unsigned short arr_16 [20] [20] [20] [20] [20] ;
unsigned long long int arr_17 [20] [20] [20] [20] [20] ;
short arr_25 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -1782638953;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 9136072487248855657LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 4080237903U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = -1073660746;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 773739200U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3739404111208317458ULL : 6737754484560703954ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)27635;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 13136797063185591889ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (short)18488;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
