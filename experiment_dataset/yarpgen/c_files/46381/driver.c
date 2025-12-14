#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)154;
unsigned long long int var_2 = 11070199877077379280ULL;
short var_9 = (short)-25633;
unsigned long long int var_11 = 5921875570955073631ULL;
unsigned long long int var_12 = 14764438233268363412ULL;
unsigned long long int var_13 = 1716090203389936213ULL;
unsigned char var_14 = (unsigned char)48;
int zero = 0;
int var_17 = 1714649387;
unsigned long long int var_18 = 2459052048218827934ULL;
short var_19 = (short)28632;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
int var_23 = -673510589;
long long int var_24 = -4601083629140047156LL;
short arr_0 [15] ;
int arr_1 [15] [15] ;
_Bool arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)19907;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 1077787364;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
