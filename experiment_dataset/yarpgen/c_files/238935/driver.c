#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8964;
long long int var_1 = 5511753629865294152LL;
long long int var_2 = 5123249849080922246LL;
long long int var_3 = 2735162620720919754LL;
unsigned short var_4 = (unsigned short)46713;
long long int var_5 = 8715311945325657931LL;
short var_8 = (short)-22415;
unsigned char var_9 = (unsigned char)30;
int zero = 0;
long long int var_10 = 7290951464964452034LL;
unsigned long long int var_11 = 2297026445328641190ULL;
unsigned int var_12 = 4182247648U;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-5696;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)82;
_Bool var_17 = (_Bool)1;
unsigned long long int arr_13 [10] [10] [10] ;
long long int arr_14 [10] [10] ;
short arr_15 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 13811955853634616754ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = -1698853097038301883LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (short)-28889;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
