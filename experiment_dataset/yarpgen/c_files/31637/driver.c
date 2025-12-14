#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5635;
unsigned char var_2 = (unsigned char)196;
int var_4 = 628644348;
unsigned char var_5 = (unsigned char)2;
unsigned char var_8 = (unsigned char)53;
short var_11 = (short)30676;
int var_12 = 2030744490;
unsigned char var_13 = (unsigned char)46;
unsigned short var_14 = (unsigned short)7181;
unsigned long long int var_15 = 12428330389690408960ULL;
int zero = 0;
long long int var_16 = -7542246793989517285LL;
unsigned short var_17 = (unsigned short)20488;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 14580483489310243414ULL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)27389;
unsigned long long int var_22 = 1957050056987210852ULL;
unsigned short arr_0 [19] ;
long long int arr_1 [19] ;
short arr_2 [19] [19] ;
_Bool arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)35817;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -7028876288646688846LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (short)2211;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
