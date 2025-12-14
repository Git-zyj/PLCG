#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11982;
unsigned int var_3 = 133058596U;
_Bool var_8 = (_Bool)1;
int var_12 = 31456926;
unsigned int var_14 = 2352687629U;
int zero = 0;
signed char var_16 = (signed char)-11;
unsigned int var_17 = 273160501U;
unsigned short var_18 = (unsigned short)26397;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)25;
short var_21 = (short)-30307;
long long int var_22 = 2950821571818077034LL;
signed char var_23 = (signed char)56;
unsigned short var_24 = (unsigned short)60645;
unsigned int arr_0 [25] ;
signed char arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 518871716U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-85;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
