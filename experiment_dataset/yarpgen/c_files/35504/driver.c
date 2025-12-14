#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
long long int var_1 = -7755222822731216412LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = -8215803627061667559LL;
signed char var_4 = (signed char)102;
_Bool var_5 = (_Bool)0;
long long int var_6 = 9157657253672384251LL;
unsigned int var_7 = 3574975586U;
signed char var_8 = (signed char)93;
_Bool var_9 = (_Bool)0;
long long int var_10 = 1732086851804796739LL;
signed char var_11 = (signed char)103;
short var_12 = (short)28522;
unsigned char var_13 = (unsigned char)153;
int zero = 0;
unsigned char var_14 = (unsigned char)254;
signed char var_15 = (signed char)78;
unsigned char var_16 = (unsigned char)19;
unsigned int var_17 = 355539263U;
unsigned long long int var_18 = 8379678753759766288ULL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-49;
_Bool var_21 = (_Bool)1;
long long int var_22 = 7881549546589180340LL;
long long int var_23 = 861579081760448603LL;
signed char var_24 = (signed char)-123;
unsigned short var_25 = (unsigned short)25902;
short var_26 = (short)10077;
_Bool var_27 = (_Bool)0;
long long int arr_4 [11] [11] ;
unsigned short arr_21 [22] ;
unsigned char arr_22 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = -399804097033897412LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36957 : (unsigned short)53665;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)228 : (unsigned char)5;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
