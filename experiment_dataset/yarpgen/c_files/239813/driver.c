#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_4 = (unsigned char)117;
_Bool var_7 = (_Bool)1;
int var_8 = -1500555682;
int var_9 = 567817361;
unsigned long long int var_13 = 2870351018462206296ULL;
short var_14 = (short)17949;
int zero = 0;
unsigned int var_16 = 3870377779U;
unsigned int var_17 = 3141323805U;
short var_18 = (short)2051;
unsigned long long int var_19 = 1174159515969978042ULL;
long long int arr_0 [15] [15] ;
unsigned long long int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -4903918169968565327LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 17104392189877391414ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
