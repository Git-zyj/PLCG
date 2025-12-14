#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)23;
_Bool var_3 = (_Bool)0;
int var_4 = -1440805295;
int var_6 = -373749744;
short var_7 = (short)12294;
unsigned long long int var_8 = 1396986212654902127ULL;
int var_9 = 573339486;
signed char var_12 = (signed char)-62;
unsigned short var_16 = (unsigned short)56294;
int zero = 0;
unsigned short var_18 = (unsigned short)36013;
unsigned long long int var_19 = 6298868822233852151ULL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)245;
signed char var_22 = (signed char)-28;
short arr_0 [13] [13] ;
short arr_4 [13] [13] [13] ;
int arr_5 [13] ;
unsigned char arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-31404;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)27020;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = -690182837;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)62 : (unsigned char)245;
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
