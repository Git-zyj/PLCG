#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15888994123334559152ULL;
unsigned int var_9 = 3174648041U;
unsigned char var_10 = (unsigned char)6;
signed char var_11 = (signed char)89;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_17 = (short)6475;
unsigned char var_18 = (unsigned char)91;
unsigned short var_19 = (unsigned short)56382;
unsigned long long int var_20 = 4258656466604015023ULL;
int arr_2 [11] [11] ;
signed char arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = -32181500;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)94;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
