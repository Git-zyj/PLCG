#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 791044326U;
short var_2 = (short)-20862;
signed char var_4 = (signed char)80;
unsigned long long int var_5 = 11843721408201319346ULL;
long long int var_7 = 8799708666631685653LL;
unsigned long long int var_8 = 2821964505923994292ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)184;
long long int var_13 = -2423140306803494905LL;
unsigned int var_14 = 4073618181U;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2679746036U;
unsigned int var_17 = 218678158U;
long long int var_18 = 8849030023823220847LL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)63418;
unsigned long long int arr_0 [16] ;
short arr_4 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 10263742951759264465ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)4559;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
