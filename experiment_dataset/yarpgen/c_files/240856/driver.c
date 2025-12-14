#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -677068952;
long long int var_4 = 8152829296518567539LL;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-59;
unsigned long long int var_8 = 14925979349591344105ULL;
unsigned int var_9 = 3777737914U;
long long int var_11 = 4806176938441994321LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)10586;
unsigned short var_14 = (unsigned short)1290;
long long int var_15 = 7263411141477292245LL;
signed char var_16 = (signed char)61;
unsigned short var_17 = (unsigned short)62537;
unsigned short arr_0 [23] [23] ;
signed char arr_1 [23] [23] ;
unsigned short arr_2 [23] ;
signed char arr_5 [23] [23] ;
unsigned char arr_10 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)10649;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)45820;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)30;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
