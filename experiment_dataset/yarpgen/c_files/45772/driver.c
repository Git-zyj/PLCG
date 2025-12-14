#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7201378878696486965LL;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 7409741244866827523ULL;
short var_12 = (short)-18628;
short var_13 = (short)32034;
int var_14 = -1760443389;
unsigned char var_15 = (unsigned char)152;
int zero = 0;
unsigned short var_17 = (unsigned short)38118;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 2774503451853129337ULL;
unsigned short var_20 = (unsigned short)37451;
unsigned int var_21 = 2684253967U;
int var_22 = -2096970073;
_Bool arr_2 [17] [17] [17] ;
int arr_6 [17] [17] [17] [17] [17] ;
short arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] = 1606618675;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)2947 : (short)29651;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
