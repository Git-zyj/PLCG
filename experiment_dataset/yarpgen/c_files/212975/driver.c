#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15719;
signed char var_5 = (signed char)17;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 501029748U;
unsigned long long int var_12 = 10137953731468246719ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)4331;
signed char var_16 = (signed char)-123;
unsigned int var_17 = 416283776U;
long long int var_18 = 8568958885091109089LL;
unsigned int var_19 = 1882205176U;
signed char var_20 = (signed char)112;
short arr_0 [24] [24] ;
unsigned char arr_1 [24] ;
short arr_5 [24] [24] ;
long long int arr_6 [24] [24] [24] [24] ;
unsigned char arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-27250;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)19231 : (short)-24477;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 6522681910902523481LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)69;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
