#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)249;
long long int var_6 = 5282607901400756720LL;
unsigned int var_7 = 3623950762U;
unsigned int var_8 = 3409867883U;
long long int var_14 = -4170499001547453622LL;
short var_18 = (short)29169;
int zero = 0;
long long int var_19 = -462514398062758419LL;
unsigned int var_20 = 408162824U;
unsigned char var_21 = (unsigned char)156;
long long int var_22 = 6549743744554111923LL;
short var_23 = (short)23081;
unsigned short var_24 = (unsigned short)26005;
long long int arr_2 [23] ;
unsigned char arr_4 [23] [23] [23] ;
unsigned char arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 7094227216150201159LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)17 : (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)70;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
