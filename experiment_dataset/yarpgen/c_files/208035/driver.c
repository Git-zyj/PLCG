#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = -989373102;
signed char var_6 = (signed char)102;
int zero = 0;
signed char var_19 = (signed char)-114;
signed char var_20 = (signed char)-84;
unsigned short var_21 = (unsigned short)49075;
signed char var_22 = (signed char)94;
unsigned int var_23 = 3394475348U;
unsigned short var_24 = (unsigned short)27338;
short arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)-26857;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
