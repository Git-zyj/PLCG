#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8099050654093777170LL;
unsigned char var_5 = (unsigned char)253;
unsigned char var_10 = (unsigned char)44;
unsigned char var_17 = (unsigned char)135;
int zero = 0;
signed char var_18 = (signed char)-98;
unsigned long long int var_19 = 15838283971875294142ULL;
unsigned long long int var_20 = 5819017652909858355ULL;
short var_21 = (short)-31287;
int var_22 = 373701482;
unsigned int var_23 = 1064120893U;
int var_24 = 776244027;
unsigned long long int var_25 = 9215243969698592112ULL;
int var_26 = 870566786;
unsigned int var_27 = 883443041U;
_Bool var_28 = (_Bool)1;
unsigned short arr_1 [16] ;
long long int arr_4 [16] [16] ;
int arr_5 [16] ;
unsigned long long int arr_6 [16] [16] ;
unsigned int arr_7 [16] [16] [16] ;
short arr_8 [16] [16] [16] ;
unsigned char arr_14 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)57491;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 6042338200252332449LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -922843309 : 515629438;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 2691484328334888668ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1706490877U : 2190686707U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)18834;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (unsigned char)196;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
