#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
unsigned short var_2 = (unsigned short)50872;
unsigned long long int var_3 = 8511102722379654137ULL;
unsigned long long int var_4 = 17750079998020434893ULL;
long long int var_5 = 2957412626108409571LL;
unsigned char var_6 = (unsigned char)157;
unsigned short var_7 = (unsigned short)43372;
signed char var_8 = (signed char)-7;
int var_10 = -2057482349;
int zero = 0;
unsigned char var_12 = (unsigned char)1;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)217;
unsigned int var_15 = 575226127U;
unsigned int var_16 = 3050738835U;
int var_17 = -697112443;
unsigned int arr_2 [25] [25] ;
int arr_4 [25] ;
signed char arr_7 [25] ;
unsigned long long int arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 318919609U : 28956576U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -1926984628;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-70 : (signed char)122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 10221689561342355654ULL : 5167473439525912727ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
