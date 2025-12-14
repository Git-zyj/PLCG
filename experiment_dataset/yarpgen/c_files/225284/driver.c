#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17345968484364175821ULL;
long long int var_1 = 5661936749398540806LL;
unsigned long long int var_2 = 17133275210354599416ULL;
short var_3 = (short)-22825;
unsigned long long int var_7 = 7392650679548952285ULL;
long long int var_8 = 5599377246820670092LL;
int zero = 0;
short var_11 = (short)-27501;
unsigned int var_12 = 2902450286U;
unsigned long long int var_13 = 9615657809432536916ULL;
short var_14 = (short)-12320;
long long int var_15 = 6837372194911567454LL;
long long int var_16 = -8940159626601904923LL;
unsigned long long int var_17 = 12684285387260012458ULL;
unsigned long long int var_18 = 11096795707212462313ULL;
unsigned long long int var_19 = 15001735013539828856ULL;
long long int arr_2 [21] ;
short arr_5 [21] ;
unsigned int arr_6 [21] [21] [21] ;
unsigned long long int arr_7 [21] [21] ;
unsigned long long int arr_8 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_10 [21] [21] [21] [21] [21] ;
unsigned long long int arr_11 [16] [16] ;
unsigned long long int arr_12 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 6042568500132143130LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)-7423;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3293432411U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = 3021384859662388544ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 12280122642680122333ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 4182082947U : 4022034367U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 3871443726041565605ULL : 13446137759396666851ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 17941148038970462755ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
