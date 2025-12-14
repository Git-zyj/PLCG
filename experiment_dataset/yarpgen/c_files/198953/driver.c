#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19139;
unsigned long long int var_2 = 10213433241635012033ULL;
signed char var_3 = (signed char)63;
unsigned char var_5 = (unsigned char)126;
int var_6 = -646853224;
long long int var_9 = -5088500113374968042LL;
int zero = 0;
int var_10 = 699209750;
unsigned char var_11 = (unsigned char)103;
short var_12 = (short)-3589;
short var_13 = (short)-17730;
unsigned short var_14 = (unsigned short)29471;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-41;
unsigned short var_17 = (unsigned short)44035;
unsigned int var_18 = 236283706U;
unsigned int arr_1 [16] ;
unsigned short arr_4 [16] [16] [16] ;
long long int arr_9 [16] ;
signed char arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2710421300U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)31632;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = -1208370448611477718LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-8;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
