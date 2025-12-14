#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4110054235673404519ULL;
int var_1 = -584056967;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-125;
long long int var_4 = -8981133107372232322LL;
long long int var_5 = -6472905405481414521LL;
unsigned long long int var_6 = 2904630487990466155ULL;
int var_7 = -60154928;
unsigned int var_8 = 3724103959U;
unsigned short var_9 = (unsigned short)8885;
unsigned short var_10 = (unsigned short)59845;
_Bool var_11 = (_Bool)1;
int var_12 = 1709557863;
unsigned long long int var_13 = 7732158608669416432ULL;
int zero = 0;
int var_14 = -1900334494;
unsigned short var_15 = (unsigned short)18748;
unsigned short var_16 = (unsigned short)3126;
short var_17 = (short)-10655;
unsigned long long int var_18 = 11851877981473891540ULL;
unsigned short var_19 = (unsigned short)18339;
unsigned short var_20 = (unsigned short)1635;
signed char var_21 = (signed char)-16;
unsigned long long int arr_9 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 8703739298439372088ULL : 15356126422979262730ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
