#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25278;
unsigned short var_2 = (unsigned short)23578;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned char var_15 = (unsigned char)233;
_Bool var_16 = (_Bool)0;
int var_17 = -267920298;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)238;
int zero = 0;
signed char var_20 = (signed char)82;
unsigned char var_21 = (unsigned char)27;
unsigned char var_22 = (unsigned char)187;
signed char var_23 = (signed char)-4;
_Bool var_24 = (_Bool)1;
short var_25 = (short)13769;
_Bool arr_4 [20] [20] ;
long long int arr_5 [20] [20] [20] ;
unsigned char arr_6 [20] ;
unsigned short arr_9 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1170809409737578479LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)35883;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
