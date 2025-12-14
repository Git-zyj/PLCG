#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4221348122752072163LL;
int var_5 = -1350796497;
long long int var_6 = 2197912625028897835LL;
long long int var_7 = -4349881087650432648LL;
_Bool var_8 = (_Bool)1;
long long int var_10 = 4726035741864097853LL;
signed char var_11 = (signed char)-95;
long long int var_15 = -2926976730552894728LL;
int zero = 0;
long long int var_16 = -3813894670680257042LL;
_Bool var_17 = (_Bool)1;
long long int var_18 = -1097573285260578207LL;
signed char var_19 = (signed char)51;
long long int var_20 = -6109191253448708812LL;
unsigned int var_21 = 440600703U;
unsigned int var_22 = 3255459595U;
unsigned int arr_2 [14] ;
long long int arr_4 [14] [14] ;
long long int arr_6 [14] ;
unsigned int arr_8 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 278361908U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = -9170201668413860919LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 5391223213154062517LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1276742035U : 1438159227U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
