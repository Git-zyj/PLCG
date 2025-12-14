#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -927566805;
int var_4 = 512543470;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 1608273583U;
int var_14 = -167991617;
unsigned long long int var_15 = 2033916398818652261ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)244;
short var_17 = (short)5891;
int var_18 = 2051353860;
unsigned int var_19 = 1181809989U;
long long int var_20 = 7385320728072477618LL;
unsigned char var_21 = (unsigned char)215;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)53;
unsigned long long int var_24 = 2719383625579129020ULL;
unsigned int var_25 = 1624425168U;
short var_26 = (short)-5067;
unsigned int var_27 = 2037993805U;
int var_28 = -1517630217;
_Bool var_29 = (_Bool)0;
signed char arr_3 [22] ;
long long int arr_5 [22] [22] [22] ;
unsigned int arr_7 [22] [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 4302501463929547782LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 3146839224U : 1731682177U;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
