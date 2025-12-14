#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1670387275;
signed char var_3 = (signed char)-49;
short var_5 = (short)-10211;
long long int var_7 = -3838546703598448135LL;
short var_8 = (short)30415;
unsigned long long int var_9 = 6290525749183239117ULL;
long long int var_11 = 5027731071479127956LL;
unsigned char var_14 = (unsigned char)170;
_Bool var_15 = (_Bool)0;
unsigned long long int var_17 = 10790645284790455017ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)22826;
signed char var_19 = (signed char)70;
unsigned short var_20 = (unsigned short)16862;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-4835;
short var_23 = (short)-2481;
_Bool arr_4 [22] [22] [22] ;
unsigned long long int arr_5 [22] [22] ;
unsigned short arr_6 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 15051140060803836645ULL : 6541018322190922312ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)2796 : (unsigned short)22812;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
