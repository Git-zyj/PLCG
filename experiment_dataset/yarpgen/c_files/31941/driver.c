#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)51338;
unsigned short var_7 = (unsigned short)44267;
unsigned long long int var_9 = 769593109127593147ULL;
int zero = 0;
signed char var_11 = (signed char)-107;
unsigned int var_12 = 701983156U;
unsigned long long int var_13 = 5827606055749693799ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)253;
unsigned long long int var_16 = 2180403499333795360ULL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2269881982U;
unsigned int var_19 = 876588646U;
signed char var_20 = (signed char)80;
unsigned char arr_0 [18] ;
long long int arr_2 [18] ;
long long int arr_4 [18] [18] [18] ;
int arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -5460958731626403361LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1064525238323561761LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = -360404268;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
