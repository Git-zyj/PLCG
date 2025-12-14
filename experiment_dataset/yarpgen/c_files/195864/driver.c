#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)28;
unsigned short var_3 = (unsigned short)50884;
unsigned long long int var_5 = 1269739189797874453ULL;
signed char var_6 = (signed char)85;
unsigned int var_7 = 2119985262U;
unsigned long long int var_9 = 17084581077239446237ULL;
unsigned char var_10 = (unsigned char)29;
int zero = 0;
int var_11 = -1994726165;
short var_12 = (short)21956;
short var_13 = (short)-14250;
unsigned int var_14 = 3797275133U;
short var_15 = (short)5168;
short arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)7521;
}

void checksum() {
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
