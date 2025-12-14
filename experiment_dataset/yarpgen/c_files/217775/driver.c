#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -492503825;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 15410920269748043850ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_12 = 16406759770021498059ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)41204;
int zero = 0;
unsigned char var_16 = (unsigned char)222;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-19839;
unsigned short var_20 = (unsigned short)7669;
long long int var_21 = -2101132804447663735LL;
unsigned char arr_5 [19] ;
int arr_13 [19] [19] [19] [19] [19] ;
unsigned short arr_16 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 1453639169;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37514 : (unsigned short)24946;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
