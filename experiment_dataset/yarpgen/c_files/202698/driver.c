#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 70003000;
int var_1 = 1081156439;
unsigned int var_2 = 3508700800U;
signed char var_3 = (signed char)30;
unsigned long long int var_4 = 9767650045160201446ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)56246;
unsigned short var_9 = (unsigned short)14796;
int zero = 0;
unsigned long long int var_10 = 13036651574363345881ULL;
short var_11 = (short)19959;
signed char var_12 = (signed char)82;
unsigned long long int var_13 = 5760256593271680704ULL;
unsigned char var_14 = (unsigned char)18;
unsigned char var_15 = (unsigned char)1;
unsigned long long int arr_5 [22] [22] [22] ;
_Bool arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1517960943641697331ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
