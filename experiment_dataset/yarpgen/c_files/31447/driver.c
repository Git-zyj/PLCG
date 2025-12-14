#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-105;
int var_4 = 1041822132;
_Bool var_5 = (_Bool)1;
int var_7 = -1737395318;
short var_8 = (short)-11361;
short var_11 = (short)11944;
unsigned short var_13 = (unsigned short)39665;
_Bool var_15 = (_Bool)0;
unsigned short var_17 = (unsigned short)50028;
int zero = 0;
unsigned char var_18 = (unsigned char)212;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)46031;
long long int var_21 = -7875856920855505730LL;
unsigned char var_22 = (unsigned char)205;
unsigned int arr_0 [20] ;
int arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1729584473U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 1121224832;
}

void checksum() {
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
