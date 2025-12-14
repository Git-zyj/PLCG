#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
unsigned char var_2 = (unsigned char)10;
unsigned long long int var_4 = 3174575438293411248ULL;
unsigned int var_8 = 1083735097U;
unsigned short var_11 = (unsigned short)30064;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1417694306U;
unsigned char var_16 = (unsigned char)54;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
long long int var_19 = -7071815247418237615LL;
signed char var_20 = (signed char)35;
long long int arr_0 [20] [20] ;
unsigned char arr_1 [20] ;
unsigned int arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -5860717806779790566LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 1345755129U;
}

void checksum() {
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
