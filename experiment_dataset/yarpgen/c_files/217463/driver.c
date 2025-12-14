#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)62527;
short var_2 = (short)-11233;
unsigned long long int var_4 = 7879740006713971938ULL;
signed char var_5 = (signed char)106;
unsigned int var_7 = 528410015U;
unsigned long long int var_8 = 4591630262542243846ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_13 = (unsigned short)39912;
unsigned int var_14 = 4155911160U;
unsigned long long int var_15 = 4378169134472881173ULL;
int zero = 0;
unsigned long long int var_17 = 7708300163623460323ULL;
long long int var_18 = -7343110255810327760LL;
unsigned char var_19 = (unsigned char)20;
unsigned short var_20 = (unsigned short)13108;
unsigned short var_21 = (unsigned short)54056;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)2062;
signed char var_24 = (signed char)127;
unsigned short var_25 = (unsigned short)42466;
short arr_3 [25] ;
int arr_8 [25] [25] [25] [25] ;
unsigned long long int arr_15 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)30579;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -753387024;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = 5827684854807065899ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
