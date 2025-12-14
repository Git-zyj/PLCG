#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1399094048;
unsigned short var_6 = (unsigned short)36516;
signed char var_14 = (signed char)-99;
unsigned long long int var_15 = 431256725248680147ULL;
unsigned long long int var_17 = 3699606175850061030ULL;
int zero = 0;
long long int var_19 = 7099078697211429580LL;
long long int var_20 = 5364459869732698792LL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)48323;
unsigned char var_23 = (unsigned char)46;
long long int var_24 = 2970103477827714899LL;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)140;
unsigned short var_27 = (unsigned short)1970;
unsigned short var_28 = (unsigned short)5309;
long long int arr_0 [23] [23] ;
long long int arr_1 [23] ;
long long int arr_4 [23] [23] [23] ;
unsigned int arr_5 [23] [23] ;
long long int arr_7 [23] ;
unsigned long long int arr_9 [23] [23] [23] [23] ;
unsigned int arr_11 [23] ;
signed char arr_14 [23] [23] ;
unsigned char arr_17 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -4415707187960276104LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -7670221856120132938LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -635784347846131127LL : 5408517429161129600LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 2882544343U : 3179034041U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 2760572391176702320LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 11349840607991658039ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 4120172882U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-77 : (signed char)117;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)183;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
