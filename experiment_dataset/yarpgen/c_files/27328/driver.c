#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 776088719967891296LL;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_11 = 8266603673879993816LL;
_Bool var_13 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -7835813981338476255LL;
int var_21 = 1534974434;
int arr_0 [25] ;
long long int arr_1 [25] ;
long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -1800597317;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 5723743078409902592LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1082896252004850233LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
