#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1301232027;
unsigned long long int var_2 = 15133306071805143173ULL;
unsigned short var_3 = (unsigned short)58742;
long long int var_4 = 3773348628273031519LL;
signed char var_5 = (signed char)62;
int var_6 = 1442405313;
int var_7 = -1628266139;
unsigned short var_8 = (unsigned short)37764;
long long int var_9 = -3333081733702732099LL;
unsigned short var_10 = (unsigned short)2193;
unsigned int var_11 = 2266672085U;
signed char var_13 = (signed char)16;
unsigned short var_14 = (unsigned short)42084;
int var_15 = -1836448596;
int var_16 = -166351445;
int zero = 0;
unsigned int var_17 = 1695054951U;
int var_18 = -243186552;
unsigned short var_19 = (unsigned short)35928;
signed char var_20 = (signed char)-103;
short var_21 = (short)20260;
short var_22 = (short)-7644;
long long int var_23 = -7813025121169344218LL;
short arr_10 [12] [12] [12] [12] ;
int arr_11 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)-26995;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 1767942071;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
