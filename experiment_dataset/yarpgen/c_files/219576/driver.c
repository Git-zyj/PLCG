#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1754694105U;
unsigned char var_3 = (unsigned char)126;
unsigned int var_4 = 4245091838U;
long long int var_5 = -4404862468318986201LL;
short var_7 = (short)-30146;
unsigned int var_8 = 3349448925U;
int var_9 = -1262820255;
long long int var_11 = -314169179088111016LL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 4202868105U;
unsigned int var_16 = 2895259242U;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 5075673421563362580LL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3534070284U;
int var_22 = -47143668;
unsigned short var_23 = (unsigned short)63845;
unsigned int var_24 = 815090844U;
_Bool var_25 = (_Bool)0;
unsigned char arr_10 [24] ;
int arr_11 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)144 : (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? -1501722000 : -420090247;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
