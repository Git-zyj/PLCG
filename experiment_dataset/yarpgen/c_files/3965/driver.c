#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)119;
long long int var_1 = -573555108122000036LL;
_Bool var_2 = (_Bool)1;
long long int var_3 = -2623837851296215496LL;
short var_5 = (short)-21404;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-6862;
unsigned long long int var_8 = 7527164486114515080ULL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)23250;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = -6105754347070109807LL;
unsigned char var_14 = (unsigned char)234;
unsigned short var_15 = (unsigned short)37228;
long long int var_16 = 7192431385665010377LL;
unsigned short var_17 = (unsigned short)50898;
short var_18 = (short)-26197;
unsigned int var_19 = 3383200316U;
signed char arr_0 [13] ;
unsigned short arr_1 [13] ;
long long int arr_3 [23] [23] ;
unsigned int arr_4 [23] [23] ;
unsigned short arr_5 [23] ;
short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)29772;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -4382181228580786205LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 291871283U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)3735;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)1655 : (short)-19046;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
