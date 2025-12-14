#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
int var_9 = 1092594778;
unsigned short var_13 = (unsigned short)22665;
int zero = 0;
unsigned long long int var_14 = 11749811379136616345ULL;
int var_15 = -1840737879;
unsigned int var_16 = 2321364375U;
short var_17 = (short)-29679;
long long int var_18 = 7830085761736461899LL;
unsigned char var_19 = (unsigned char)25;
unsigned int arr_2 [20] ;
_Bool arr_7 [22] ;
unsigned int arr_9 [22] ;
unsigned int arr_6 [20] ;
long long int arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 1754832020U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3494486536U : 529050114U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 4029350664U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 1151656337898225103LL : 7064512051257000355LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
