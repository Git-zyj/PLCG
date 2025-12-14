#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6821608963037435038LL;
short var_2 = (short)13392;
unsigned short var_5 = (unsigned short)5794;
long long int var_6 = 701064413045141819LL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)30;
unsigned char var_10 = (unsigned char)225;
signed char var_11 = (signed char)-111;
long long int var_12 = 5897396760265672236LL;
int zero = 0;
unsigned char var_13 = (unsigned char)217;
signed char var_14 = (signed char)10;
int var_15 = -703469890;
unsigned char var_16 = (unsigned char)1;
short var_17 = (short)-18173;
unsigned long long int var_18 = 12330941595017600019ULL;
unsigned char var_19 = (unsigned char)241;
unsigned short arr_2 [14] ;
int arr_3 [14] ;
int arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)64966;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -1101549099;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 1978530352 : 644576542;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
