#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)27850;
int var_3 = -912158318;
_Bool var_6 = (_Bool)0;
int var_8 = -1019846375;
unsigned char var_9 = (unsigned char)30;
short var_10 = (short)-14212;
int zero = 0;
unsigned char var_11 = (unsigned char)140;
unsigned int var_12 = 3203334688U;
_Bool var_13 = (_Bool)1;
long long int var_14 = -3416346834338982439LL;
int var_15 = 617512036;
short var_16 = (short)-118;
unsigned char arr_0 [15] [15] ;
long long int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -248075965598308487LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
