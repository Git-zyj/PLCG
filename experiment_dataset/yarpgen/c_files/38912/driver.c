#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1804111537183985723LL;
unsigned short var_1 = (unsigned short)28633;
unsigned long long int var_2 = 11135079805695761164ULL;
signed char var_3 = (signed char)-88;
unsigned char var_4 = (unsigned char)210;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)9720;
unsigned int var_8 = 347408494U;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 4037231881U;
int zero = 0;
unsigned int var_15 = 1860341731U;
_Bool var_16 = (_Bool)1;
int var_17 = -373906617;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int var_20 = -1274449298;
int var_21 = 1421821881;
_Bool arr_1 [16] ;
unsigned int arr_2 [16] [16] ;
unsigned int arr_6 [11] ;
unsigned long long int arr_7 [11] ;
_Bool arr_4 [16] ;
signed char arr_5 [16] ;
long long int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 729240495U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 4008921662U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 6708183670454862077ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -9033804316620411055LL : -9060596322729576597LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
