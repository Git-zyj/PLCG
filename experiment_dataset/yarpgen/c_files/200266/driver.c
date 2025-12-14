#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42831;
unsigned short var_1 = (unsigned short)5337;
unsigned int var_2 = 1494527964U;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 3571328709U;
unsigned char var_9 = (unsigned char)26;
unsigned long long int var_10 = 1564343540710899564ULL;
unsigned long long int var_11 = 15709690509225907547ULL;
int zero = 0;
unsigned long long int var_12 = 5429160162314532398ULL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1673892916U;
signed char var_15 = (signed char)33;
unsigned int var_16 = 4192743U;
long long int var_17 = 8616740298763734537LL;
_Bool var_18 = (_Bool)1;
long long int arr_0 [24] ;
long long int arr_2 [20] ;
unsigned int arr_3 [20] ;
long long int arr_4 [20] [20] ;
unsigned char arr_7 [20] ;
short arr_16 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -8739360313422038477LL : 9169025532873390370LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -4833944898117936049LL : -151230463737250223LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1768374612U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 4561131120133243309LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (short)19656;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
