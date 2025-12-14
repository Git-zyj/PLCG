#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1061041042;
unsigned short var_4 = (unsigned short)57351;
int var_6 = -157223247;
unsigned short var_7 = (unsigned short)55834;
unsigned long long int var_8 = 1025120527608487014ULL;
unsigned char var_9 = (unsigned char)59;
unsigned long long int var_10 = 15838607191065062673ULL;
unsigned long long int var_11 = 10932647906889257462ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)114;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_18 = (short)26035;
unsigned int var_19 = 3342580574U;
unsigned char var_20 = (unsigned char)93;
long long int var_21 = -1783987746400094252LL;
long long int var_22 = -2031963672478881800LL;
short var_23 = (short)21020;
long long int var_24 = -6229972015145120661LL;
unsigned char var_25 = (unsigned char)75;
short var_26 = (short)8505;
unsigned int var_27 = 947266937U;
short arr_1 [17] ;
unsigned short arr_3 [17] [17] ;
unsigned char arr_6 [24] ;
int arr_8 [24] ;
unsigned long long int arr_9 [24] [24] ;
unsigned char arr_13 [24] ;
signed char arr_14 [24] ;
unsigned char arr_15 [24] [24] ;
signed char arr_4 [17] ;
unsigned int arr_5 [17] [17] ;
int arr_19 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)-14861;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)59843;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 991899794;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 18221743083021792544ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 1358945677U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = 1134806323;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
