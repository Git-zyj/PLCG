#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -768782540;
int var_1 = -1106494665;
unsigned long long int var_2 = 1248851132860813934ULL;
unsigned long long int var_3 = 11002763225790195540ULL;
int var_5 = 626829023;
int var_6 = 716526015;
int var_7 = -674335092;
unsigned long long int var_8 = 2353221014409593960ULL;
unsigned long long int var_9 = 15371245085654513666ULL;
unsigned long long int var_10 = 15260569359852421735ULL;
int zero = 0;
int var_11 = -1434407328;
int var_12 = 2111291965;
int var_13 = 1168593904;
int var_14 = -285660085;
int var_15 = 367523510;
unsigned long long int var_16 = 4778616231426923904ULL;
unsigned long long int var_17 = 18192966424830850429ULL;
int arr_0 [17] ;
unsigned long long int arr_1 [17] [17] ;
unsigned long long int arr_2 [17] [17] [17] ;
unsigned long long int arr_3 [17] [17] ;
int arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 16140129;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 10089923446354760733ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 9688534062683421115ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 5244527542818380783ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 998168240;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
