#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6840804145140769745LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 17325037053314463445ULL;
_Bool var_5 = (_Bool)0;
int var_7 = 1508169117;
signed char var_9 = (signed char)12;
signed char var_10 = (signed char)114;
long long int var_11 = 9211677335008276578LL;
int var_16 = -1222376609;
short var_17 = (short)-9354;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-99;
long long int var_21 = -1316612955704653265LL;
unsigned char var_22 = (unsigned char)111;
int var_23 = -301210038;
unsigned int var_24 = 4027590555U;
unsigned long long int arr_1 [12] [12] ;
int arr_5 [12] ;
long long int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 18270287608298805358ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = -295126325;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 8883942844867502239LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
