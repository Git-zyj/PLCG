#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4215;
_Bool var_5 = (_Bool)0;
short var_8 = (short)16502;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)45;
unsigned char var_14 = (unsigned char)214;
long long int var_15 = 3644490812465113129LL;
int zero = 0;
short var_16 = (short)22666;
unsigned short var_17 = (unsigned short)49216;
long long int var_18 = -4614249702891490414LL;
unsigned short var_19 = (unsigned short)45308;
long long int var_20 = -3247596941281691330LL;
signed char var_21 = (signed char)15;
unsigned int arr_1 [15] [15] ;
int arr_5 [15] [15] ;
_Bool arr_9 [15] ;
unsigned int arr_12 [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 3480938367U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = -1728135530;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 3504410740U : 359633628U;
}

void checksum() {
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
