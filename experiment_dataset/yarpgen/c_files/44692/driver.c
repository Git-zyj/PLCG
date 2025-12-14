#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7773899411909613447LL;
short var_2 = (short)15338;
unsigned char var_3 = (unsigned char)219;
unsigned short var_4 = (unsigned short)49577;
unsigned long long int var_5 = 18341815748280594930ULL;
int var_8 = 1787563695;
short var_9 = (short)-22379;
int var_10 = 1113696499;
unsigned long long int var_11 = 6664175150809027626ULL;
signed char var_13 = (signed char)-107;
int zero = 0;
unsigned char var_14 = (unsigned char)251;
long long int var_15 = -7026076721502916318LL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 15167461481716734818ULL;
int var_18 = 42554180;
unsigned long long int var_19 = 14404750935976594896ULL;
long long int var_20 = -1737221382766283408LL;
unsigned long long int arr_1 [17] ;
long long int arr_2 [17] ;
_Bool arr_6 [17] [17] ;
long long int arr_7 [17] [17] [17] ;
signed char arr_9 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 8187946444820298577ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 438205370949076309LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 6078146426396840986LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)30;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
