#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3017120496U;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)247;
unsigned long long int var_5 = 15484842343142306657ULL;
unsigned long long int var_8 = 14985426399674002819ULL;
unsigned char var_9 = (unsigned char)149;
unsigned int var_10 = 2547820402U;
unsigned int var_11 = 732096814U;
unsigned short var_13 = (unsigned short)7337;
int zero = 0;
short var_15 = (short)-13468;
unsigned char var_16 = (unsigned char)215;
unsigned short var_17 = (unsigned short)8673;
unsigned short var_18 = (unsigned short)7041;
long long int var_19 = 7487927133157119683LL;
unsigned char var_20 = (unsigned char)59;
long long int var_21 = -115630267345794977LL;
unsigned int arr_1 [19] [19] ;
unsigned long long int arr_2 [19] ;
unsigned long long int arr_4 [19] ;
signed char arr_5 [19] [19] [19] ;
int arr_6 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 4205143714U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2521276316620856820ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 14108873552993569897ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 218323411;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
