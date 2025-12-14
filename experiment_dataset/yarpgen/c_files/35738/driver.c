#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)56272;
unsigned short var_5 = (unsigned short)45676;
unsigned int var_6 = 1336894616U;
short var_7 = (short)-5057;
int var_8 = -535378918;
unsigned long long int var_9 = 6083609518554229354ULL;
unsigned short var_10 = (unsigned short)40803;
unsigned int var_12 = 778323389U;
unsigned int var_13 = 3555483819U;
signed char var_15 = (signed char)32;
int zero = 0;
int var_16 = -1742516028;
unsigned char var_17 = (unsigned char)226;
unsigned char var_18 = (unsigned char)191;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 785365993798053106ULL;
unsigned int var_21 = 1067997212U;
unsigned char var_22 = (unsigned char)35;
unsigned long long int var_23 = 6572941570404355283ULL;
unsigned int var_24 = 1564475726U;
unsigned long long int var_25 = 13158328609593905189ULL;
unsigned int var_26 = 2504220020U;
signed char var_27 = (signed char)-6;
unsigned char var_28 = (unsigned char)166;
short var_29 = (short)32145;
unsigned long long int arr_0 [25] [25] ;
int arr_1 [25] ;
unsigned long long int arr_5 [25] [25] [25] ;
long long int arr_7 [25] [25] ;
short arr_8 [25] [25] ;
int arr_9 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 15776541398051924284ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 308520485;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 14941319492718091323ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 5277785080592529836LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-5558;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 78858655;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
