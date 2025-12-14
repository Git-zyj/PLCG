#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1253556338;
unsigned long long int var_5 = 5371556425951179061ULL;
unsigned short var_6 = (unsigned short)43333;
int zero = 0;
unsigned short var_11 = (unsigned short)57491;
unsigned short var_12 = (unsigned short)37378;
unsigned long long int var_13 = 5154708840966532667ULL;
unsigned int var_14 = 682129234U;
signed char var_15 = (signed char)59;
_Bool arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
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
