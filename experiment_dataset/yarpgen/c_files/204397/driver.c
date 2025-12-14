#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
unsigned int var_5 = 3932789193U;
signed char var_10 = (signed char)-7;
_Bool var_14 = (_Bool)0;
long long int var_17 = -1366413035833684276LL;
int zero = 0;
unsigned char var_18 = (unsigned char)254;
short var_19 = (short)-21232;
unsigned short var_20 = (unsigned short)44327;
signed char var_21 = (signed char)-81;
signed char var_22 = (signed char)-16;
unsigned char arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)186;
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
