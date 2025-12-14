#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)217;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3302485486U;
long long int var_5 = -3068601183616983581LL;
short var_6 = (short)25740;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)1245;
long long int var_13 = 8083454997878542648LL;
long long int var_14 = 2526972557588976684LL;
int var_15 = 267881828;
long long int var_16 = 8903881408997461570LL;
int zero = 0;
short var_20 = (short)-13458;
int var_21 = -1626260725;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 8260591718606521643ULL;
unsigned long long int var_24 = 11204813064953477512ULL;
signed char var_25 = (signed char)60;
signed char var_26 = (signed char)125;
long long int var_27 = 6941608201620398646LL;
long long int var_28 = -2527921545198052867LL;
unsigned long long int var_29 = 7979753572022948549ULL;
long long int arr_2 [21] [21] ;
long long int arr_3 [21] ;
unsigned short arr_4 [21] [21] [21] ;
short arr_5 [21] ;
unsigned int arr_8 [21] [21] ;
unsigned long long int arr_12 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 1540572742310131678LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -2124024438077974630LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)26762;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)-22009;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 2105672757U : 1591239095U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 10761570286819492037ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
