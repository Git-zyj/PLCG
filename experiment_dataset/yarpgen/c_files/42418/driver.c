#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)119;
signed char var_6 = (signed char)-33;
long long int var_7 = 9084640829956033403LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_15 = -6801534611858010026LL;
unsigned long long int var_16 = 13319477650645940317ULL;
unsigned short var_17 = (unsigned short)62664;
unsigned short var_18 = (unsigned short)59944;
unsigned char var_19 = (unsigned char)218;
long long int var_20 = 1364943788146402945LL;
long long int var_21 = 9218669392486010211LL;
unsigned short var_22 = (unsigned short)64250;
short var_23 = (short)25212;
unsigned short var_24 = (unsigned short)26594;
_Bool arr_0 [24] [24] ;
unsigned char arr_2 [24] ;
unsigned long long int arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 14683268121036414786ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
