#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3842806690U;
long long int var_2 = 5982328544865405227LL;
int var_3 = 1376370966;
short var_6 = (short)-20126;
unsigned int var_8 = 3923421568U;
unsigned short var_9 = (unsigned short)32727;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 12818591022493943485ULL;
unsigned int var_15 = 988902939U;
unsigned long long int var_18 = 16900753375671476537ULL;
short var_19 = (short)-28571;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2818333753U;
unsigned int var_22 = 3691761706U;
unsigned short var_23 = (unsigned short)26060;
unsigned int var_24 = 2542289874U;
_Bool arr_1 [18] [18] ;
short arr_2 [18] ;
_Bool arr_3 [18] ;
long long int arr_4 [18] ;
unsigned int arr_5 [18] ;
signed char arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-22242;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -7158580335411408779LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 1915445469U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (signed char)-127;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
