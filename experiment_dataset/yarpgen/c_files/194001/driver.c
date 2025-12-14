#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 137876551U;
unsigned long long int var_1 = 8048324099400449529ULL;
signed char var_2 = (signed char)90;
signed char var_3 = (signed char)91;
int var_4 = 623750731;
unsigned long long int var_5 = 16011186507947943401ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3767706916U;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)16;
signed char var_10 = (signed char)-53;
unsigned int var_12 = 2596282755U;
unsigned short var_13 = (unsigned short)9964;
int var_15 = 1418711116;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 9078239931781320423ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)245;
signed char var_20 = (signed char)42;
int var_21 = -1842279088;
signed char arr_7 [11] [11] ;
int arr_8 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 1135581602;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
