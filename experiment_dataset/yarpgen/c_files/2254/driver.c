#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)86;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 8763627032922551272ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)161;
_Bool var_14 = (_Bool)0;
int var_15 = 1472379703;
short var_16 = (short)9461;
short var_17 = (short)-30148;
int var_18 = -1573876826;
unsigned long long int var_19 = 1266758876546795191ULL;
unsigned char var_20 = (unsigned char)132;
unsigned short var_21 = (unsigned short)18972;
unsigned char arr_0 [13] ;
unsigned int arr_1 [13] ;
long long int arr_3 [13] [13] [13] ;
signed char arr_8 [14] [14] [14] ;
short arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2651392853U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -5302246829718068420LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (short)-13037;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
