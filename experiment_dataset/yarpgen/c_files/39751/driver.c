#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7963972855238855839LL;
int var_1 = -417125499;
short var_2 = (short)2521;
int var_3 = 1367247631;
int var_5 = -666226799;
unsigned short var_6 = (unsigned short)56267;
int var_7 = -1749345215;
long long int var_8 = -9150471815611864759LL;
short var_9 = (short)-23014;
unsigned int var_10 = 3799795272U;
unsigned int var_11 = 850390392U;
signed char var_12 = (signed char)61;
unsigned long long int var_13 = 7846018611711971879ULL;
int var_14 = -677512639;
int zero = 0;
signed char var_15 = (signed char)-25;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)24903;
_Bool var_18 = (_Bool)1;
long long int arr_0 [24] [24] ;
long long int arr_1 [24] ;
unsigned int arr_2 [24] ;
unsigned short arr_4 [24] ;
unsigned short arr_5 [24] ;
unsigned long long int arr_6 [24] [24] ;
_Bool arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 1121863271478963606LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -3983118961948941838LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 3410509341U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)5691;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)30565;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 12528416283298989515ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
