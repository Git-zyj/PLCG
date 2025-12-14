#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8212811127106647587LL;
short var_1 = (short)-21117;
unsigned int var_2 = 3720904693U;
unsigned long long int var_3 = 5326895884326367470ULL;
unsigned short var_4 = (unsigned short)21369;
signed char var_5 = (signed char)73;
unsigned short var_6 = (unsigned short)38877;
unsigned long long int var_7 = 9424837299401655586ULL;
unsigned int var_9 = 2966120567U;
int var_11 = 2110229996;
int var_12 = 2018311611;
short var_14 = (short)12826;
long long int var_15 = 4027748972088020246LL;
unsigned long long int var_16 = 3241316710531451337ULL;
int var_17 = 1160159342;
int zero = 0;
short var_18 = (short)16323;
int var_19 = -197099170;
short var_20 = (short)-23723;
int var_21 = 2004572635;
long long int var_22 = -3046269045865717508LL;
long long int var_23 = 9211734827876587926LL;
int var_24 = -2030723502;
int var_25 = 1371292070;
long long int var_26 = -8282360658400904687LL;
unsigned long long int var_27 = 1296183173906037649ULL;
short var_28 = (short)15084;
unsigned int arr_10 [24] ;
unsigned int arr_14 [24] [24] ;
long long int arr_19 [24] [24] [24] [24] [24] ;
short arr_20 [24] [24] ;
short arr_33 [10] ;
unsigned long long int arr_34 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 2991042391U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 1193261508U : 3745546044U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 3240194971681259279LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-24533;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_33 [i_0] = (short)31246;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_34 [i_0] = 16877656223499649974ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
