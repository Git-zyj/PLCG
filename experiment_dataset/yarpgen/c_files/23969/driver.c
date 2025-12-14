#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10868493051190190576ULL;
unsigned long long int var_8 = 15218899355558900467ULL;
short var_9 = (short)-17394;
int zero = 0;
short var_14 = (short)4957;
unsigned long long int var_15 = 16926766220619652886ULL;
short var_16 = (short)18737;
unsigned short var_17 = (unsigned short)14010;
short var_18 = (short)-11707;
unsigned short var_19 = (unsigned short)53305;
int arr_0 [22] ;
int arr_3 [22] ;
int arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1314062711;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 2057384730;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = -1715098430;
}

void checksum() {
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
