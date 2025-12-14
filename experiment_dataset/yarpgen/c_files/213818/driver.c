#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)9;
signed char var_3 = (signed char)-13;
unsigned int var_12 = 1206117547U;
int zero = 0;
unsigned int var_15 = 484916493U;
unsigned short var_16 = (unsigned short)7617;
unsigned short var_17 = (unsigned short)19804;
long long int var_18 = -3722864247096316038LL;
long long int var_19 = 1661261329133175218LL;
unsigned long long int var_20 = 1539382418279732003ULL;
unsigned char var_21 = (unsigned char)88;
unsigned int var_22 = 1904687875U;
unsigned char var_23 = (unsigned char)69;
unsigned long long int var_24 = 11752965498330967752ULL;
unsigned long long int var_25 = 8821431431374191965ULL;
unsigned int var_26 = 89816231U;
int var_27 = -1579203268;
unsigned short var_28 = (unsigned short)58153;
_Bool var_29 = (_Bool)1;
signed char var_30 = (signed char)-29;
signed char var_31 = (signed char)-74;
unsigned long long int var_32 = 6581297142038011281ULL;
_Bool var_33 = (_Bool)0;
unsigned long long int var_34 = 638193792555032498ULL;
_Bool var_35 = (_Bool)1;
int arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 25519681;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
