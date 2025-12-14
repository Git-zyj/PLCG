#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2051532819295070071LL;
unsigned char var_2 = (unsigned char)45;
long long int var_3 = 1597615380057101005LL;
long long int var_4 = -4772425055664599946LL;
unsigned char var_6 = (unsigned char)251;
unsigned short var_8 = (unsigned short)50757;
int zero = 0;
long long int var_10 = -5728849983328041075LL;
unsigned int var_11 = 3702516726U;
long long int var_12 = 1272127902235684410LL;
unsigned long long int var_13 = 14684216285328533620ULL;
short var_14 = (short)-30319;
signed char var_15 = (signed char)-78;
unsigned long long int var_16 = 12614777553715082080ULL;
unsigned char arr_0 [16] ;
_Bool arr_1 [16] ;
long long int arr_4 [17] ;
int arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -2354760537809626703LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -1037489948;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
