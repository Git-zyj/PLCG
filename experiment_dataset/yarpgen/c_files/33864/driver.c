#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)23;
short var_5 = (short)-31201;
long long int var_7 = -2165143389099384292LL;
unsigned short var_8 = (unsigned short)8972;
signed char var_9 = (signed char)-93;
long long int var_11 = 7459019799774846680LL;
int zero = 0;
unsigned short var_16 = (unsigned short)27884;
unsigned short var_17 = (unsigned short)41363;
signed char var_18 = (signed char)-84;
int var_19 = -1227679409;
unsigned char var_20 = (unsigned char)240;
long long int var_21 = -214425650614634787LL;
unsigned long long int var_22 = 4024249144897958598ULL;
signed char arr_5 [20] [20] [20] ;
short arr_7 [20] [20] [20] [20] [20] ;
unsigned char arr_12 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-8839;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)162;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
