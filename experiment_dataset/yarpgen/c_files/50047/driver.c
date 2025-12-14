#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1515001182;
unsigned long long int var_1 = 11152481311352200986ULL;
long long int var_9 = 8551228790610778630LL;
unsigned int var_11 = 1197053698U;
unsigned int var_12 = 3355313778U;
unsigned int var_13 = 2485891778U;
unsigned int var_14 = 2039306366U;
unsigned int var_15 = 330211159U;
int zero = 0;
unsigned short var_16 = (unsigned short)40616;
unsigned int var_17 = 1464364085U;
long long int var_18 = 4467718081349358647LL;
int var_19 = 683960830;
int var_20 = 865084412;
unsigned long long int var_21 = 1340882973045665167ULL;
short var_22 = (short)21853;
short arr_0 [17] ;
unsigned int arr_2 [17] ;
signed char arr_12 [15] [15] ;
_Bool arr_16 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)-17886;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 3346436188U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
