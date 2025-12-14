#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
unsigned long long int var_2 = 17107862128888469738ULL;
long long int var_5 = 2758574295564119503LL;
unsigned short var_11 = (unsigned short)43642;
unsigned char var_13 = (unsigned char)76;
int zero = 0;
signed char var_16 = (signed char)7;
unsigned short var_17 = (unsigned short)22905;
_Bool var_18 = (_Bool)1;
int var_19 = -651716587;
unsigned int var_20 = 3968504124U;
signed char arr_1 [16] ;
unsigned long long int arr_3 [16] [16] [16] ;
signed char arr_5 [22] ;
unsigned long long int arr_6 [22] ;
long long int arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-20 : (signed char)-39;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 14362587425703231623ULL : 3415504568609562520ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 135338630145843013ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = -8086639588380205835LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
