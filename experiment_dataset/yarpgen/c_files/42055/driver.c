#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -566272277;
unsigned char var_3 = (unsigned char)77;
unsigned short var_11 = (unsigned short)53398;
unsigned long long int var_12 = 9466998351671625304ULL;
short var_14 = (short)21384;
int zero = 0;
short var_16 = (short)28205;
unsigned long long int var_17 = 6876300425479098195ULL;
short var_18 = (short)28906;
short var_19 = (short)-16371;
_Bool var_20 = (_Bool)0;
unsigned short arr_0 [14] ;
unsigned long long int arr_2 [14] [14] ;
short arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)64282;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 5562092200526704988ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (short)-6515;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
