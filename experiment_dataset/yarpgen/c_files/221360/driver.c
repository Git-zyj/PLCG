#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12241955570030654103ULL;
unsigned int var_4 = 214779535U;
unsigned long long int var_7 = 3129332583642162400ULL;
int var_11 = -1893246213;
_Bool var_13 = (_Bool)0;
short var_14 = (short)21706;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-22647;
unsigned short var_19 = (unsigned short)64564;
unsigned int var_20 = 836150137U;
unsigned long long int var_21 = 8838325173437135715ULL;
int var_22 = 1385671886;
unsigned long long int var_23 = 7803456665560922482ULL;
signed char var_24 = (signed char)40;
unsigned int var_25 = 2471964588U;
long long int var_26 = -5293144138734936138LL;
short arr_0 [20] ;
int arr_1 [20] ;
signed char arr_2 [20] ;
signed char arr_5 [20] [20] ;
unsigned long long int arr_6 [20] ;
unsigned short arr_3 [20] ;
unsigned char arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)21958;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -878905217;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 5338955748119660295ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)29487;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)222;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
