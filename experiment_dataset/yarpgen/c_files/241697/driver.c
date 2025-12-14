#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)136;
long long int var_3 = -7239865559617791388LL;
short var_5 = (short)21762;
unsigned int var_6 = 1437253528U;
unsigned short var_8 = (unsigned short)12962;
signed char var_11 = (signed char)-30;
unsigned short var_13 = (unsigned short)27274;
unsigned short var_18 = (unsigned short)20884;
int zero = 0;
int var_19 = -67821321;
int var_20 = -520287576;
long long int var_21 = -5542644833940628477LL;
unsigned char arr_0 [11] [11] ;
long long int arr_5 [11] [11] ;
unsigned short arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = -4133843968035258131LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)2127;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
