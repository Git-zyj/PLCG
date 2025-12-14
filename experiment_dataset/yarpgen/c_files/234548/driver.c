#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 568956594143453856ULL;
long long int var_1 = 7132964986795715463LL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-24;
long long int var_7 = -3092992644797565698LL;
unsigned short var_9 = (unsigned short)51353;
unsigned int var_10 = 1220597749U;
unsigned long long int var_11 = 12719419144255366738ULL;
int zero = 0;
unsigned long long int var_14 = 18101911319708841443ULL;
signed char var_15 = (signed char)-51;
unsigned int var_16 = 215306777U;
signed char var_17 = (signed char)62;
int var_18 = -2022121850;
int arr_2 [18] [18] ;
_Bool arr_4 [18] ;
unsigned long long int arr_6 [18] ;
long long int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = -317748334;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 6151714219855300964ULL : 17354917452310610463ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -6859882880465018021LL : 6924490172868126473LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
