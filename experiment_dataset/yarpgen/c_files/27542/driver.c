#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4691;
unsigned char var_7 = (unsigned char)40;
unsigned short var_8 = (unsigned short)48104;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)38027;
unsigned int var_15 = 3672496080U;
int zero = 0;
unsigned short var_16 = (unsigned short)170;
unsigned long long int var_17 = 15966391907632054154ULL;
signed char var_18 = (signed char)-59;
unsigned char var_19 = (unsigned char)59;
unsigned int var_20 = 1304222357U;
unsigned long long int var_21 = 16425401585919382479ULL;
signed char var_22 = (signed char)96;
int arr_0 [16] ;
unsigned short arr_1 [16] [16] ;
int arr_3 [16] ;
signed char arr_5 [16] [16] [16] ;
signed char arr_7 [16] [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -840088576;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)18463;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -1469635367;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)23;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
