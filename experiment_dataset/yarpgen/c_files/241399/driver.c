#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 741058220556136245LL;
unsigned int var_2 = 4244012521U;
_Bool var_3 = (_Bool)1;
unsigned char var_13 = (unsigned char)53;
unsigned int var_16 = 3600967163U;
int zero = 0;
long long int var_17 = 5675534427366622217LL;
unsigned char var_18 = (unsigned char)37;
unsigned long long int var_19 = 14216269033450762971ULL;
long long int var_20 = 8773124256351501844LL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2249325247U;
unsigned int var_23 = 171175924U;
unsigned long long int var_24 = 1406390300900209205ULL;
_Bool arr_2 [17] [17] ;
unsigned short arr_3 [17] [17] ;
long long int arr_4 [17] ;
long long int arr_7 [10] [10] ;
short arr_8 [10] ;
_Bool arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)22505;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -860035232074552078LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = -72181232395978213LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (short)31517;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
