#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 5509019503849088197LL;
unsigned int var_2 = 2078494231U;
unsigned int var_7 = 857812276U;
unsigned long long int var_8 = 14453076235411616797ULL;
short var_9 = (short)-19090;
int zero = 0;
unsigned long long int var_12 = 12603148128818709160ULL;
unsigned long long int var_13 = 11521441946698525891ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 10495524390780678557ULL;
int var_16 = -565615958;
unsigned char var_17 = (unsigned char)172;
unsigned int arr_2 [13] ;
unsigned short arr_6 [13] ;
long long int arr_9 [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 2440019022U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned short)52215;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? -8638242292825938015LL : 1416587319340135452LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
