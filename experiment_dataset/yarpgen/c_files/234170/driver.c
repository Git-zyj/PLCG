#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10885522940397635314ULL;
int var_2 = 332174636;
signed char var_3 = (signed char)-62;
unsigned char var_5 = (unsigned char)130;
unsigned short var_6 = (unsigned short)63156;
unsigned short var_9 = (unsigned short)36866;
signed char var_10 = (signed char)72;
signed char var_11 = (signed char)123;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-108;
unsigned long long int var_18 = 8960578791048929022ULL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 382083241U;
unsigned char var_21 = (unsigned char)54;
unsigned int arr_0 [15] ;
unsigned short arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 2649232410U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)32637;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
