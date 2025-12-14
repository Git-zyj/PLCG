#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9828483003543136120ULL;
int var_2 = -1137524780;
signed char var_3 = (signed char)-126;
signed char var_4 = (signed char)-82;
unsigned char var_7 = (unsigned char)212;
unsigned char var_8 = (unsigned char)185;
int zero = 0;
int var_10 = 224377522;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)45242;
unsigned char var_13 = (unsigned char)20;
int var_14 = 111598892;
unsigned int var_15 = 1238595497U;
unsigned long long int var_16 = 11725226707174433164ULL;
int var_17 = -1452062617;
unsigned long long int var_18 = 13548025377868369968ULL;
unsigned short arr_0 [19] ;
int arr_1 [19] [19] ;
unsigned short arr_2 [19] ;
short arr_6 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)10246;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -1790260897;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)51322;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)29528;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
