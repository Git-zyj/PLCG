#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5077714221978054982LL;
long long int var_1 = 3101800133125191846LL;
unsigned char var_2 = (unsigned char)144;
unsigned long long int var_3 = 2783456766527257275ULL;
long long int var_4 = 5377511756768010642LL;
unsigned short var_5 = (unsigned short)37372;
unsigned short var_6 = (unsigned short)8875;
long long int var_7 = 1989907878527850824LL;
unsigned short var_8 = (unsigned short)59961;
short var_9 = (short)-2879;
unsigned int var_10 = 3166375177U;
unsigned short var_11 = (unsigned short)30187;
int zero = 0;
unsigned int var_12 = 1554586906U;
signed char var_13 = (signed char)-111;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 10832246901516375889ULL;
unsigned short var_16 = (unsigned short)39692;
_Bool arr_2 [10] [10] ;
long long int arr_3 [10] ;
_Bool arr_6 [12] [12] ;
signed char arr_10 [20] ;
signed char arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 4519460874005098578LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (signed char)44;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
