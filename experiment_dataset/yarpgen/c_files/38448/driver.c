#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)207;
unsigned short var_5 = (unsigned short)63026;
unsigned short var_6 = (unsigned short)29601;
long long int var_7 = 892404799012119658LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 13895607637307325593ULL;
int zero = 0;
unsigned long long int var_17 = 10903710867228665525ULL;
unsigned short var_18 = (unsigned short)53287;
unsigned short var_19 = (unsigned short)65404;
_Bool arr_0 [11] ;
long long int arr_2 [11] ;
int arr_4 [11] ;
unsigned char arr_6 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -7540613209944709356LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -1981376313;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)141;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
