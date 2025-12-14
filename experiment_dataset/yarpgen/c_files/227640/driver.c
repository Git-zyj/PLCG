#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 2544006086071982234ULL;
short var_2 = (short)2214;
signed char var_3 = (signed char)110;
unsigned int var_7 = 1321753206U;
unsigned int var_8 = 3206966653U;
long long int var_11 = -7730371671810183656LL;
signed char var_13 = (signed char)93;
int zero = 0;
unsigned long long int var_14 = 1169875622686922942ULL;
unsigned long long int var_15 = 2877507067002242995ULL;
long long int var_16 = 344313016180012910LL;
short var_17 = (short)31686;
signed char var_18 = (signed char)63;
unsigned int var_19 = 68502194U;
_Bool var_20 = (_Bool)1;
long long int arr_9 [20] [20] [20] ;
unsigned short arr_11 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 5230119149620244075LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)62481 : (unsigned short)21391;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
