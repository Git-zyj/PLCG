#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2559882110277296267LL;
unsigned char var_3 = (unsigned char)206;
signed char var_6 = (signed char)-33;
long long int var_7 = -6894988305128348338LL;
long long int var_9 = 9115511459341561511LL;
unsigned long long int var_11 = 9362063783596958769ULL;
unsigned long long int var_12 = 15035486185563519518ULL;
short var_13 = (short)-15364;
unsigned long long int var_14 = 9355294417713708297ULL;
long long int var_15 = -3967747239353477132LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)92;
signed char var_19 = (signed char)-91;
unsigned long long int var_20 = 2401723118854466029ULL;
unsigned long long int var_21 = 78353828942700109ULL;
unsigned int var_22 = 1145718752U;
unsigned long long int var_23 = 17579889412064250720ULL;
unsigned int var_24 = 3303942531U;
unsigned short var_25 = (unsigned short)44723;
_Bool var_26 = (_Bool)1;
long long int var_27 = 8528289628902667010LL;
unsigned int var_28 = 1334719984U;
unsigned long long int arr_0 [19] ;
signed char arr_1 [19] ;
long long int arr_2 [19] ;
unsigned char arr_4 [19] [19] [19] ;
unsigned int arr_10 [12] ;
long long int arr_13 [12] [12] [12] [12] ;
unsigned int arr_18 [12] [12] [12] [12] [12] [12] ;
unsigned int arr_21 [12] [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 16058660620030791864ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -4933855724947072086LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 3036064531U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -1849502661218198400LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 661508616U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 199450260U : 3756920891U;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
