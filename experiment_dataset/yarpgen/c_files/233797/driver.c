#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1002950846U;
_Bool var_4 = (_Bool)0;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-13;
signed char var_10 = (signed char)-73;
int zero = 0;
int var_11 = -239699351;
signed char var_12 = (signed char)81;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-66;
unsigned short arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)675;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
