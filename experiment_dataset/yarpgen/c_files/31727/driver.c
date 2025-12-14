#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11136825538092773373ULL;
unsigned long long int var_4 = 13419588407115718031ULL;
_Bool var_5 = (_Bool)0;
long long int var_7 = 6429546978540800824LL;
_Bool var_10 = (_Bool)1;
signed char var_15 = (signed char)-30;
unsigned short var_17 = (unsigned short)56126;
int zero = 0;
long long int var_20 = 8711865528247648706LL;
_Bool var_21 = (_Bool)1;
long long int var_22 = 681641159561200117LL;
unsigned char var_23 = (unsigned char)224;
unsigned char var_24 = (unsigned char)61;
unsigned int var_25 = 1328095586U;
long long int var_26 = -8984644046318724584LL;
unsigned short arr_2 [14] ;
unsigned char arr_4 [14] ;
long long int arr_8 [14] [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)48763;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8353802386544874931LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
