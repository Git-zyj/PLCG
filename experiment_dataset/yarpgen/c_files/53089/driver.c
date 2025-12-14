#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17777873926510193698ULL;
_Bool var_7 = (_Bool)1;
signed char var_15 = (signed char)-50;
int zero = 0;
int var_16 = -1116400952;
unsigned long long int var_17 = 4394779968919047304ULL;
_Bool var_18 = (_Bool)0;
int var_19 = -1998657691;
int var_20 = 494065401;
signed char var_21 = (signed char)-80;
int var_22 = 1139431273;
unsigned short arr_1 [12] ;
signed char arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)52046;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)92;
}

void checksum() {
    hash(&seed, var_16);
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
