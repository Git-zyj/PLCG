#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3608122542U;
unsigned int var_2 = 3183791033U;
int var_7 = -130432750;
unsigned long long int var_13 = 15813147858185041654ULL;
long long int var_14 = -6019860215682024366LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_20 = 4351690971454468344LL;
long long int var_21 = 2484927440219895437LL;
short var_22 = (short)6807;
unsigned int var_23 = 742130345U;
unsigned char var_24 = (unsigned char)204;
_Bool var_25 = (_Bool)0;
long long int arr_2 [19] [19] ;
int arr_6 [19] ;
unsigned char arr_9 [19] [19] [19] [19] ;
signed char arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 5777125268015963274LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = -769487455;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)15 : (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (signed char)-8;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
