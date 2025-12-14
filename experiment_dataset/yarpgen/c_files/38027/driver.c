#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 518931556U;
unsigned short var_7 = (unsigned short)21369;
unsigned short var_8 = (unsigned short)59388;
unsigned int var_10 = 4007295852U;
unsigned long long int var_16 = 737196344227494191ULL;
int zero = 0;
unsigned long long int var_17 = 15441220045110529590ULL;
long long int var_18 = 6592047059530373242LL;
unsigned int var_19 = 3224765845U;
unsigned short var_20 = (unsigned short)38959;
long long int var_21 = -4487822305603072147LL;
unsigned int var_22 = 1032433023U;
unsigned long long int var_23 = 9857268936310126728ULL;
int var_24 = 1238219607;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 12315057566085828876ULL;
long long int var_27 = -2014700497755939320LL;
unsigned char var_28 = (unsigned char)152;
unsigned short var_29 = (unsigned short)22247;
int arr_0 [16] ;
signed char arr_1 [16] ;
unsigned int arr_2 [16] ;
short arr_5 [16] ;
long long int arr_9 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -1062372283;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 1940848731U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)9284;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 1606027360993320419LL;
}

void checksum() {
    hash(&seed, var_17);
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
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
