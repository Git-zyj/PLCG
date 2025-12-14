#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -603148775;
unsigned int var_1 = 3338361985U;
unsigned int var_4 = 2266949605U;
unsigned char var_6 = (unsigned char)48;
long long int var_10 = -6370911269129511464LL;
_Bool var_15 = (_Bool)0;
int var_16 = 1758431871;
int zero = 0;
signed char var_18 = (signed char)-32;
unsigned short var_19 = (unsigned short)3865;
short var_20 = (short)-20796;
unsigned int var_21 = 385388784U;
unsigned int var_22 = 168266167U;
signed char var_23 = (signed char)12;
short var_24 = (short)-8550;
int var_25 = 86035629;
unsigned char var_26 = (unsigned char)37;
unsigned int arr_0 [20] [20] ;
short arr_1 [20] ;
unsigned short arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 2099990010U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)25526;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)64051;
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
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
