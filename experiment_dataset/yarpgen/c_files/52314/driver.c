#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1012321699;
signed char var_9 = (signed char)18;
long long int var_10 = -5807675849829084691LL;
short var_12 = (short)9757;
unsigned long long int var_13 = 311820704547151021ULL;
unsigned long long int var_14 = 4537116386288137675ULL;
long long int var_15 = 5803512325085018215LL;
int zero = 0;
unsigned char var_17 = (unsigned char)52;
long long int var_18 = 6757039244084128614LL;
unsigned short var_19 = (unsigned short)19903;
unsigned short var_20 = (unsigned short)20350;
short var_21 = (short)10280;
unsigned int var_22 = 2941704910U;
int var_23 = 1157686467;
unsigned short var_24 = (unsigned short)18000;
long long int arr_0 [15] ;
unsigned long long int arr_1 [15] [15] ;
unsigned short arr_5 [15] [15] [15] [15] ;
unsigned short arr_7 [15] ;
long long int arr_8 [15] [15] ;
unsigned short arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3229803026793765708LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 4898846694088686176ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned short)4562;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned short)28089;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = 1750864813471547671LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned short)24262;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
