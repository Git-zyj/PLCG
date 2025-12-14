#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7187;
unsigned int var_2 = 2562937598U;
long long int var_3 = 5602820123790374386LL;
unsigned short var_5 = (unsigned short)31146;
unsigned long long int var_6 = 7793508248134711926ULL;
unsigned long long int var_7 = 11694255590020485860ULL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)67;
int zero = 0;
long long int var_10 = 5458185465419487449LL;
unsigned long long int var_11 = 4895647233381751572ULL;
unsigned int var_12 = 2821522106U;
unsigned long long int var_13 = 1197352141393516986ULL;
unsigned int var_14 = 765041668U;
unsigned short var_15 = (unsigned short)59427;
unsigned int var_16 = 2729265319U;
unsigned long long int var_17 = 7551380334492832123ULL;
signed char arr_0 [25] [25] ;
unsigned char arr_1 [25] [25] ;
unsigned int arr_2 [25] [25] ;
long long int arr_3 [14] ;
unsigned int arr_4 [14] ;
unsigned char arr_11 [15] [15] [15] ;
unsigned int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 4247424150U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 8556223552951334900LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 1280302952U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 1533089199U;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
