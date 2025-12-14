#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5931222012131362216LL;
_Bool var_1 = (_Bool)1;
long long int var_4 = 4019412368995156188LL;
unsigned short var_5 = (unsigned short)53081;
int zero = 0;
unsigned int var_16 = 2064135409U;
unsigned int var_17 = 1988730818U;
signed char var_18 = (signed char)115;
int var_19 = -2123867108;
short var_20 = (short)-28764;
unsigned short var_21 = (unsigned short)20116;
short var_22 = (short)24868;
unsigned long long int var_23 = 12358746088449252385ULL;
unsigned short var_24 = (unsigned short)34670;
signed char var_25 = (signed char)22;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)-94;
long long int var_28 = -2078685164571249529LL;
unsigned short arr_0 [14] ;
int arr_1 [14] [14] ;
short arr_3 [19] ;
signed char arr_4 [19] ;
unsigned short arr_5 [19] ;
int arr_8 [10] [10] ;
unsigned int arr_9 [10] [10] ;
signed char arr_2 [14] [14] ;
long long int arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)27941;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 414994089;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)-8765;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)36690;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 1076104062 : 1230320311;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = 154367420U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -1778845430430234249LL : -1062258512911090279LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
