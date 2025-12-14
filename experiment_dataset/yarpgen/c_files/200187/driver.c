#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_7 = (unsigned short)37603;
unsigned long long int var_9 = 6658244897423172155ULL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)18946;
unsigned char var_15 = (unsigned char)173;
int zero = 0;
long long int var_17 = 572026168329861752LL;
long long int var_18 = -6559519852767421412LL;
unsigned short var_19 = (unsigned short)31242;
unsigned int var_20 = 2433662318U;
long long int var_21 = -3838091781197882745LL;
unsigned int arr_0 [12] ;
unsigned int arr_1 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3932644441U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 3929455423U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
