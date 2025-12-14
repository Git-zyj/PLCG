#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-32;
signed char var_2 = (signed char)-125;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 10321199134930933985ULL;
signed char var_10 = (signed char)73;
unsigned int var_12 = 3684330759U;
signed char var_13 = (signed char)-15;
int zero = 0;
unsigned char var_16 = (unsigned char)193;
unsigned int var_17 = 4057611474U;
short var_18 = (short)22731;
unsigned short var_19 = (unsigned short)11692;
unsigned short arr_2 [11] ;
unsigned int arr_3 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)62819;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2470256269U : 294220043U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
