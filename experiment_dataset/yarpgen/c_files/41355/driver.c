#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17931631415923770122ULL;
int var_1 = 808841995;
unsigned char var_2 = (unsigned char)89;
int var_4 = -1654406553;
unsigned long long int var_7 = 7601855480779205638ULL;
unsigned char var_11 = (unsigned char)203;
int zero = 0;
short var_16 = (short)-23550;
unsigned long long int var_17 = 12063546954161306096ULL;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-7086;
int var_20 = 170492584;
unsigned char var_21 = (unsigned char)180;
unsigned short var_22 = (unsigned short)44244;
unsigned int var_23 = 3860323904U;
unsigned char var_24 = (unsigned char)108;
unsigned int var_25 = 3582519031U;
int arr_1 [12] ;
long long int arr_2 [12] ;
signed char arr_3 [14] ;
long long int arr_4 [14] [14] ;
signed char arr_6 [19] ;
unsigned long long int arr_7 [19] [19] ;
unsigned long long int arr_8 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1372306633 : 794821396;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -29499597213157021LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 2562405631111820286LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = 13092156100886516956ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = 12999631114163468465ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
