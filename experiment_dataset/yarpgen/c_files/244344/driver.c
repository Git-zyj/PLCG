#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2453447320U;
long long int var_1 = -5915464482720055752LL;
signed char var_2 = (signed char)31;
unsigned short var_3 = (unsigned short)43807;
unsigned short var_4 = (unsigned short)45052;
int var_5 = 1630301654;
unsigned long long int var_11 = 11743044882654454968ULL;
signed char var_12 = (signed char)25;
int zero = 0;
unsigned char var_13 = (unsigned char)91;
short var_14 = (short)-2948;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-28;
long long int var_17 = -2798364608896801079LL;
_Bool var_18 = (_Bool)1;
int var_19 = 1821624432;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-94;
unsigned short arr_1 [14] ;
long long int arr_2 [14] ;
long long int arr_6 [14] ;
long long int arr_8 [14] [14] ;
short arr_9 [14] ;
unsigned long long int arr_4 [14] ;
unsigned long long int arr_7 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)5248;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 7094417718988512325LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = -2444680373998891096LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = -610929883755596981LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)15993 : (short)-18104;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 8279453826224095128ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 12360418591579519291ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
