#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -575246689;
long long int var_1 = -43626824122256608LL;
signed char var_2 = (signed char)117;
short var_5 = (short)-20855;
_Bool var_6 = (_Bool)0;
long long int var_9 = -1356915363334388498LL;
int zero = 0;
signed char var_10 = (signed char)-22;
signed char var_11 = (signed char)84;
int var_12 = -1014686970;
long long int var_13 = 1744744640621229295LL;
short var_14 = (short)10768;
unsigned long long int var_15 = 14713773057637081743ULL;
signed char var_16 = (signed char)-40;
long long int var_17 = -7017024429615334220LL;
unsigned int var_18 = 4276193714U;
long long int var_19 = -7140177484079454812LL;
signed char var_20 = (signed char)76;
unsigned long long int var_21 = 15823911325479422915ULL;
signed char arr_0 [10] ;
signed char arr_1 [10] ;
signed char arr_5 [25] [25] ;
unsigned int arr_8 [18] ;
unsigned int arr_9 [18] ;
unsigned long long int arr_3 [10] ;
unsigned long long int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 2250946632U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 1798080923U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 13682908182829276116ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 2381352793347177471ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
