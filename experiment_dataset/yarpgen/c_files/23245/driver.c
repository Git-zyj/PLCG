#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3504237903249248401LL;
short var_1 = (short)-19040;
short var_2 = (short)-28399;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1354039094U;
signed char var_5 = (signed char)-61;
long long int var_7 = -1006018396444769311LL;
unsigned long long int var_8 = 15003308730098746327ULL;
unsigned long long int var_10 = 17268195363155598534ULL;
short var_11 = (short)-32139;
unsigned long long int var_12 = 2576108314560614741ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = -724264150;
unsigned short var_15 = (unsigned short)33600;
unsigned short var_16 = (unsigned short)24828;
unsigned short var_17 = (unsigned short)59573;
int var_18 = 21428190;
unsigned char arr_0 [19] ;
unsigned short arr_3 [19] ;
_Bool arr_4 [19] ;
unsigned char arr_5 [19] [19] ;
int arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13822 : (unsigned short)5697;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)102 : (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -1063483635 : 270272840;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
