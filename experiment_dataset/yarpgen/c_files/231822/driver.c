#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
unsigned int var_1 = 3554917276U;
unsigned short var_2 = (unsigned short)61828;
unsigned char var_3 = (unsigned char)223;
unsigned int var_5 = 856133098U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 2308198097U;
unsigned short var_8 = (unsigned short)52836;
unsigned int var_9 = 2177214575U;
unsigned int var_10 = 2794227784U;
long long int var_12 = 8302726506563840559LL;
signed char var_13 = (signed char)105;
int zero = 0;
unsigned short var_14 = (unsigned short)14128;
unsigned long long int var_15 = 17703539858758192536ULL;
unsigned short var_16 = (unsigned short)6642;
unsigned long long int var_17 = 735964297287364507ULL;
unsigned short var_18 = (unsigned short)33568;
short var_19 = (short)6994;
signed char arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)8 : (signed char)-59;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
