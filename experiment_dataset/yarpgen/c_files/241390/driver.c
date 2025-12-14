#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7162;
signed char var_1 = (signed char)106;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 4038467456U;
short var_7 = (short)-29031;
long long int var_9 = 4020221536020519972LL;
unsigned int var_10 = 3342187602U;
long long int var_12 = 5651712143319100143LL;
int zero = 0;
long long int var_13 = -5660004329426064825LL;
short var_14 = (short)-13348;
unsigned short var_15 = (unsigned short)5029;
unsigned int var_16 = 4171554932U;
unsigned int var_17 = 3163371804U;
long long int var_18 = 6123434281139010759LL;
short arr_0 [12] ;
unsigned char arr_1 [12] ;
unsigned char arr_2 [12] ;
unsigned char arr_4 [12] ;
long long int arr_6 [12] [12] ;
unsigned short arr_7 [12] ;
unsigned short arr_8 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)-7786;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 412323199070760259LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned short)24712;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)54426;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
