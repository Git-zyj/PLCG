#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)33;
unsigned char var_5 = (unsigned char)201;
short var_6 = (short)17880;
long long int var_7 = 4032043768962204299LL;
_Bool var_8 = (_Bool)0;
long long int var_10 = 8890035543698785126LL;
unsigned long long int var_11 = 2066290981009185806ULL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 295885266473018108LL;
int zero = 0;
unsigned char var_14 = (unsigned char)164;
int var_15 = 2041564180;
unsigned int var_16 = 4032280937U;
_Bool var_17 = (_Bool)1;
short var_18 = (short)26139;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 8278730830673603144ULL;
unsigned long long int var_21 = 336236319708190788ULL;
unsigned long long int var_22 = 1949639236217828364ULL;
long long int var_23 = -611704457825081379LL;
unsigned long long int arr_1 [24] ;
signed char arr_2 [24] ;
short arr_3 [24] [24] [24] ;
unsigned long long int arr_5 [24] [24] [24] [24] ;
unsigned char arr_7 [24] [24] [24] [24] ;
_Bool arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 8098738071663859250ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)27329;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 16478823493077923750ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
