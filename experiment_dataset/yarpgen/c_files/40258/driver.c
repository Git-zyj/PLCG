#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3650902312U;
int var_2 = -649480935;
short var_3 = (short)16409;
long long int var_4 = -7799165504195789523LL;
unsigned short var_5 = (unsigned short)25924;
unsigned int var_6 = 969126753U;
unsigned char var_7 = (unsigned char)94;
unsigned long long int var_8 = 7960748353940943946ULL;
int var_9 = -1990785247;
short var_10 = (short)-12348;
unsigned long long int var_11 = 9850652191853218920ULL;
_Bool var_13 = (_Bool)0;
short var_16 = (short)-32708;
int zero = 0;
unsigned short var_17 = (unsigned short)39408;
unsigned char var_18 = (unsigned char)65;
int var_19 = -811038785;
unsigned int var_20 = 567726130U;
_Bool var_21 = (_Bool)1;
long long int var_22 = -3132182523978340577LL;
unsigned short arr_2 [18] ;
short arr_3 [18] ;
_Bool arr_5 [18] ;
long long int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)13547;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)17480;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -9145059884647433215LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
