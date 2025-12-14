#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
short var_1 = (short)5487;
short var_2 = (short)24621;
long long int var_3 = 428956406008463082LL;
signed char var_4 = (signed char)41;
int var_5 = 1520304747;
_Bool var_6 = (_Bool)0;
long long int var_7 = -4717533717004022992LL;
long long int var_8 = 7359529059993098479LL;
unsigned char var_9 = (unsigned char)219;
unsigned int var_10 = 3879502825U;
unsigned long long int var_11 = 3955483248936526681ULL;
int zero = 0;
long long int var_13 = -2431577613270504618LL;
short var_14 = (short)-31176;
short var_15 = (short)-24026;
unsigned short var_16 = (unsigned short)1716;
unsigned char var_17 = (unsigned char)202;
signed char var_18 = (signed char)-26;
unsigned short var_19 = (unsigned short)36523;
long long int var_20 = -4896861917629834295LL;
unsigned short var_21 = (unsigned short)28907;
long long int arr_0 [20] ;
int arr_1 [20] ;
short arr_2 [20] ;
unsigned short arr_3 [20] [20] ;
int arr_6 [13] ;
unsigned int arr_9 [13] [13] ;
int arr_4 [20] [20] ;
unsigned int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -6573818366720763070LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1352601857 : -798969970;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)-21548;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)64927;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 2128728187;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 1154903489U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 669195238 : 758620837;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 561908267U : 956243010U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
