#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -614038013;
short var_4 = (short)-16601;
unsigned int var_6 = 3035286995U;
short var_7 = (short)-2098;
int var_8 = 670958241;
unsigned int var_10 = 1485994759U;
short var_11 = (short)8515;
int zero = 0;
int var_12 = 1709972848;
unsigned int var_13 = 3453857868U;
long long int var_14 = 4829719239497249812LL;
unsigned char var_15 = (unsigned char)25;
short var_16 = (short)-16581;
_Bool var_17 = (_Bool)1;
int var_18 = -206352878;
signed char var_19 = (signed char)-10;
unsigned long long int var_20 = 11679056769429607644ULL;
short var_21 = (short)-7077;
short var_22 = (short)-4830;
unsigned char var_23 = (unsigned char)190;
_Bool arr_0 [22] ;
int arr_4 [22] [22] [22] [22] ;
unsigned int arr_7 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = -223439015;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3860725598U;
}

void checksum() {
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
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
