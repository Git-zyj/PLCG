#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
signed char var_4 = (signed char)114;
signed char var_6 = (signed char)118;
long long int var_10 = 6998343794993586392LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)1765;
int var_17 = 765216121;
_Bool var_18 = (_Bool)0;
short var_19 = (short)10775;
unsigned long long int var_20 = 11391372523350156703ULL;
unsigned int var_21 = 1895091150U;
unsigned int var_22 = 1231620350U;
unsigned long long int var_23 = 12030182846746869504ULL;
unsigned short var_24 = (unsigned short)11134;
unsigned int arr_2 [21] ;
unsigned int arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 62780970U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 2406684577U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
