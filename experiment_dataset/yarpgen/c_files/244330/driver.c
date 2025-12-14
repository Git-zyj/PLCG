#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_3 = 2775533261U;
unsigned long long int var_4 = 11583722685846799733ULL;
unsigned int var_8 = 998415833U;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 9875267548340227200ULL;
unsigned short var_15 = (unsigned short)47535;
int zero = 0;
unsigned long long int var_17 = 14053615347838918771ULL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)7877;
unsigned char var_20 = (unsigned char)144;
unsigned short var_21 = (unsigned short)803;
unsigned int var_22 = 1446167085U;
unsigned char arr_7 [17] ;
unsigned long long int arr_9 [17] ;
unsigned long long int arr_15 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 488727509066986409ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = 15891856920698905141ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
