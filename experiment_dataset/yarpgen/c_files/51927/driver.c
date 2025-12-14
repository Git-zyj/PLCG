#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = 822606516601780072LL;
short var_4 = (short)7571;
short var_8 = (short)18101;
unsigned char var_11 = (unsigned char)241;
int zero = 0;
long long int var_12 = 4592116746469710663LL;
long long int var_13 = -3265765627700022065LL;
long long int var_14 = 3682732110921793700LL;
long long int var_15 = -9072511499786695156LL;
long long int var_16 = -8233245514777707027LL;
long long int var_17 = 1566716134442961642LL;
unsigned long long int var_18 = 9647791997796979072ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 15759474590625050249ULL;
unsigned long long int var_21 = 3727461652501092585ULL;
unsigned int var_22 = 3044813217U;
unsigned long long int arr_5 [12] [12] ;
int arr_6 [12] [12] ;
long long int arr_9 [12] ;
long long int arr_10 [12] ;
unsigned char arr_19 [12] [12] [12] [12] [12] [12] [12] ;
unsigned char arr_3 [11] ;
long long int arr_4 [11] ;
unsigned short arr_7 [12] ;
short arr_8 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 14262011598134382382ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 1698942128;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 4874953011025489287LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = -4856962588050883328LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -6231536233088809303LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned short)9055;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (short)3139;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
