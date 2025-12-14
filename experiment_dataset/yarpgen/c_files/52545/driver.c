#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3725093941508816624ULL;
unsigned char var_4 = (unsigned char)246;
int var_7 = -802959654;
int var_8 = -1216998751;
_Bool var_9 = (_Bool)1;
int var_10 = 1388188728;
unsigned short var_11 = (unsigned short)31837;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 17036067277229849965ULL;
int zero = 0;
signed char var_17 = (signed char)87;
short var_18 = (short)-28944;
long long int var_19 = -6408179474914588492LL;
unsigned char var_20 = (unsigned char)99;
signed char var_21 = (signed char)101;
unsigned short var_22 = (unsigned short)32085;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)51;
long long int var_25 = -392412614333771165LL;
long long int var_26 = 4790891661828285383LL;
unsigned long long int var_27 = 12266796411752430667ULL;
_Bool arr_1 [16] ;
_Bool arr_2 [16] ;
signed char arr_7 [16] [16] [16] ;
long long int arr_9 [16] [16] ;
int arr_12 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = -817909388720538805LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -365207816 : -755354406;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
