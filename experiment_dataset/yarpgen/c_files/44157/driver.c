#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9218295753321463682ULL;
short var_6 = (short)-32113;
unsigned long long int var_8 = 2994675005731469058ULL;
unsigned long long int var_10 = 6455725462530110348ULL;
unsigned short var_11 = (unsigned short)7364;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2091229395U;
signed char var_18 = (signed char)64;
int var_19 = -1685392737;
unsigned char var_20 = (unsigned char)234;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
int arr_4 [17] ;
unsigned int arr_7 [17] [17] [17] [17] [17] ;
long long int arr_8 [17] [17] [17] [17] ;
unsigned char arr_12 [24] ;
int arr_14 [24] ;
unsigned long long int arr_19 [24] [24] [24] ;
int arr_20 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -814534751;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 2828479343U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 5454163203645389696LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = -789116432;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 12719628334328784992ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = 805873314;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
