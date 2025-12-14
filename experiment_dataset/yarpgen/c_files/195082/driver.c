#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6970052050987084095LL;
unsigned char var_2 = (unsigned char)151;
int var_8 = 1595556434;
unsigned char var_10 = (unsigned char)151;
_Bool var_12 = (_Bool)0;
int var_14 = 1141272402;
unsigned char var_17 = (unsigned char)150;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 4168392027962761391LL;
unsigned char var_20 = (unsigned char)220;
unsigned char var_21 = (unsigned char)36;
unsigned char var_22 = (unsigned char)145;
long long int var_23 = -5777011873733982797LL;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)192;
int var_27 = 2090541958;
long long int var_28 = -6354233873804272414LL;
int arr_0 [13] [13] ;
unsigned char arr_1 [13] [13] ;
unsigned char arr_2 [12] [12] ;
int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -14549787;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -2062329321;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
