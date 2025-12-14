#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1990847766934788489LL;
unsigned long long int var_4 = 678567115709142643ULL;
signed char var_5 = (signed char)-7;
unsigned int var_6 = 1958304817U;
unsigned short var_7 = (unsigned short)51558;
unsigned long long int var_11 = 11792473319557306541ULL;
unsigned short var_15 = (unsigned short)38886;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -7197662371596250615LL;
int var_18 = -1087489205;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)45015;
int arr_2 [16] [16] ;
long long int arr_6 [16] [16] [16] [16] ;
long long int arr_7 [16] [16] [16] [16] ;
unsigned char arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -2024400073;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 4910154487140656036LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 5609758503607526228LL : 4748181824051752014LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)110 : (unsigned char)40;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
