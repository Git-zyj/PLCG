#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2930352823U;
unsigned long long int var_4 = 14663561746976211569ULL;
long long int var_5 = 725096328763371934LL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned char var_15 = (unsigned char)211;
short var_16 = (short)11536;
int zero = 0;
signed char var_18 = (signed char)-121;
long long int var_19 = -4814900803365386513LL;
unsigned int var_20 = 2564789295U;
unsigned int var_21 = 3223839996U;
unsigned int var_22 = 1013874895U;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)15;
signed char arr_0 [17] ;
_Bool arr_1 [17] ;
_Bool arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
