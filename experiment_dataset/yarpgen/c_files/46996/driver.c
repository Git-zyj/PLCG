#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29316;
signed char var_5 = (signed char)-66;
int var_7 = -1556305013;
unsigned int var_12 = 2521910240U;
signed char var_13 = (signed char)-33;
unsigned long long int var_14 = 1813522305812207838ULL;
int zero = 0;
short var_15 = (short)13624;
int var_16 = 1640547999;
signed char var_17 = (signed char)-50;
unsigned short var_18 = (unsigned short)11858;
unsigned char var_19 = (unsigned char)63;
signed char arr_1 [17] [17] ;
signed char arr_7 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)61 : (signed char)92;
}

void checksum() {
    hash(&seed, var_15);
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
