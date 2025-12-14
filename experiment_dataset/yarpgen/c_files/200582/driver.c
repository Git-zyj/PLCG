#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 445424154174490102ULL;
long long int var_2 = 5373301762331415403LL;
int var_3 = -1392491953;
unsigned long long int var_4 = 4073497813738112531ULL;
long long int var_5 = -715682730384980421LL;
unsigned int var_6 = 232957441U;
unsigned int var_8 = 1353865182U;
unsigned long long int var_9 = 11378684426875716126ULL;
long long int var_12 = 8811629801511185915LL;
int var_13 = -2099513010;
unsigned long long int var_14 = 13257497223320992700ULL;
long long int var_15 = 2940323038676385488LL;
int zero = 0;
long long int var_16 = -632083689644914661LL;
long long int var_17 = 7249064115157480925LL;
unsigned int var_18 = 2778974592U;
unsigned int var_19 = 311599175U;
int arr_0 [11] ;
long long int arr_1 [11] ;
unsigned short arr_2 [11] ;
_Bool arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -800529003;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 6301575930423241391LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)15715;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
