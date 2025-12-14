#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
short var_1 = (short)-1664;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)(-127 - 1);
unsigned short var_9 = (unsigned short)61492;
short var_11 = (short)-27192;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-17172;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
signed char arr_1 [22] [22] ;
short arr_2 [22] ;
_Bool arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)30752;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
