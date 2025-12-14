#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2120343667U;
int var_1 = -1233059666;
unsigned char var_2 = (unsigned char)240;
unsigned long long int var_3 = 3962356783375443980ULL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)10851;
long long int var_6 = -3618403287582137366LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)8704;
unsigned long long int var_9 = 629033830477789953ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)46;
unsigned short var_11 = (unsigned short)50321;
unsigned long long int var_12 = 10304920200239587949ULL;
int var_13 = 1100436948;
unsigned char var_14 = (unsigned char)220;
signed char var_15 = (signed char)64;
unsigned long long int var_16 = 4309868082039618226ULL;
unsigned long long int var_17 = 9169462233095364143ULL;
_Bool var_18 = (_Bool)0;
long long int var_19 = -3563914505967735205LL;
unsigned short var_20 = (unsigned short)9714;
_Bool var_21 = (_Bool)0;
long long int var_22 = -4150012333706224465LL;
unsigned long long int var_23 = 8296026731127371078ULL;
int var_24 = -1629171762;
short var_25 = (short)-22909;
unsigned char var_26 = (unsigned char)78;
unsigned char var_27 = (unsigned char)209;
unsigned long long int var_28 = 6275638548411528399ULL;
long long int var_29 = -7911357426118900283LL;
unsigned int var_30 = 943817909U;
short var_31 = (short)19448;
unsigned long long int var_32 = 16315857507593424692ULL;
signed char var_33 = (signed char)-6;
unsigned char arr_1 [24] ;
int arr_2 [24] [24] ;
unsigned short arr_3 [24] ;
unsigned short arr_4 [24] [24] ;
int arr_5 [24] [24] ;
int arr_6 [24] [24] [24] ;
int arr_10 [24] [24] [24] ;
signed char arr_12 [24] [24] [24] [24] [24] [24] ;
int arr_15 [24] [24] ;
int arr_17 [24] [24] [24] [24] ;
unsigned int arr_20 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -2034371640 : 1489796041;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)25291;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)22003;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 910843563;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -76215052;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 1785097680;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = -717004563;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -1871998821;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = 4015520887U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
