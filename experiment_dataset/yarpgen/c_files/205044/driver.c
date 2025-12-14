#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)44197;
unsigned char var_3 = (unsigned char)219;
int var_7 = -709663622;
int var_8 = 298633496;
unsigned long long int var_9 = 5282390603945691101ULL;
int var_10 = 2129920592;
unsigned long long int var_12 = 2251206300180827229ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)93;
short var_21 = (short)-15093;
unsigned char var_22 = (unsigned char)17;
_Bool var_23 = (_Bool)0;
long long int var_24 = 5818898543758658525LL;
_Bool var_25 = (_Bool)1;
unsigned char arr_0 [17] ;
unsigned long long int arr_1 [17] [17] ;
signed char arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)54 : (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 15444642212634899813ULL : 3180156865819920159ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-24 : (signed char)-55;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
