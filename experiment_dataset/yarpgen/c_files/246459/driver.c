#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-50;
unsigned long long int var_2 = 6505813998734738674ULL;
unsigned char var_3 = (unsigned char)161;
unsigned char var_4 = (unsigned char)187;
short var_5 = (short)-2032;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)52787;
signed char var_9 = (signed char)-63;
short var_10 = (short)-21041;
unsigned long long int var_11 = 7047800579151704501ULL;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)238;
unsigned char var_16 = (unsigned char)132;
unsigned short var_17 = (unsigned short)47296;
_Bool var_18 = (_Bool)0;
short var_19 = (short)30277;
int zero = 0;
signed char var_20 = (signed char)-51;
signed char var_21 = (signed char)48;
unsigned int var_22 = 2374488456U;
unsigned long long int var_23 = 6218052609873395ULL;
unsigned char arr_8 [14] ;
unsigned long long int arr_9 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 10120434343091011725ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
