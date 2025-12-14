#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = 1572416080;
short var_4 = (short)-9514;
unsigned char var_5 = (unsigned char)163;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)3;
signed char var_8 = (signed char)86;
unsigned short var_9 = (unsigned short)27640;
unsigned short var_11 = (unsigned short)18490;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3504547951U;
int zero = 0;
unsigned char var_18 = (unsigned char)118;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-9876;
unsigned short var_21 = (unsigned short)18483;
_Bool var_22 = (_Bool)0;
int var_23 = -280965375;
long long int var_24 = -6150845249901584048LL;
int var_25 = -1983797514;
int arr_2 [17] [17] ;
_Bool arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 1423904266;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
