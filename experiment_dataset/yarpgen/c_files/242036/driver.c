#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3856714904U;
signed char var_3 = (signed char)-47;
long long int var_4 = 439326679772211900LL;
unsigned short var_6 = (unsigned short)49035;
unsigned char var_9 = (unsigned char)67;
long long int var_10 = 992303415660692002LL;
unsigned char var_11 = (unsigned char)183;
int zero = 0;
unsigned char var_12 = (unsigned char)162;
unsigned int var_13 = 2457875538U;
unsigned char var_14 = (unsigned char)199;
unsigned short var_15 = (unsigned short)45553;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-7591;
unsigned long long int var_18 = 5466492109300873813ULL;
unsigned short arr_3 [14] [14] [14] ;
unsigned int arr_4 [14] ;
unsigned int arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)2889;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 1472173336U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 2192205789U;
}

void checksum() {
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
