#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2451887012011979252ULL;
int var_3 = 1082883537;
signed char var_5 = (signed char)53;
unsigned long long int var_6 = 8686296572898282642ULL;
_Bool var_8 = (_Bool)0;
long long int var_9 = 8187848528389157193LL;
int zero = 0;
long long int var_10 = 9201593753098965153LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 646263533U;
unsigned long long int var_13 = 15888928562801390832ULL;
unsigned short var_14 = (unsigned short)27142;
unsigned char var_15 = (unsigned char)52;
short var_16 = (short)-9669;
_Bool var_17 = (_Bool)0;
short var_18 = (short)31193;
long long int var_19 = 4194998212577299545LL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
int arr_1 [23] ;
_Bool arr_4 [17] [17] ;
_Bool arr_6 [17] ;
unsigned long long int arr_11 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -908402826;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 15668513680982170334ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
