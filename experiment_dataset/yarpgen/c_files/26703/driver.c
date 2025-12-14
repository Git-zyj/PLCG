#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -715883696;
short var_1 = (short)-18689;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)55;
unsigned int var_5 = 2852762931U;
unsigned short var_7 = (unsigned short)11400;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 3558218491U;
unsigned long long int var_14 = 9872793053498928596ULL;
signed char var_15 = (signed char)-115;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)7302;
unsigned short var_19 = (unsigned short)2919;
int zero = 0;
signed char var_20 = (signed char)25;
int var_21 = -1860921492;
unsigned char var_22 = (unsigned char)67;
short var_23 = (short)-26000;
signed char arr_0 [22] ;
long long int arr_9 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1511721032970969646LL : 7957055823805402619LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
