#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8206;
unsigned long long int var_1 = 13217644709530956916ULL;
unsigned int var_2 = 1204684415U;
unsigned short var_5 = (unsigned short)36508;
short var_8 = (short)9175;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)8770;
unsigned long long int var_11 = 1660611262996658488ULL;
unsigned short var_12 = (unsigned short)46654;
unsigned char var_13 = (unsigned char)192;
unsigned short var_14 = (unsigned short)47999;
long long int var_15 = -1166224559878043065LL;
signed char var_16 = (signed char)97;
unsigned long long int var_17 = 5103563128826149084ULL;
unsigned char var_18 = (unsigned char)8;
short arr_2 [19] ;
unsigned short arr_3 [19] ;
short arr_6 [15] ;
unsigned short arr_9 [15] [15] ;
unsigned long long int arr_4 [19] ;
short arr_5 [19] ;
unsigned char arr_10 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)-24331;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)17815;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)12285;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)14163;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 11978483740896554725ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)-15803;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (unsigned char)222;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
