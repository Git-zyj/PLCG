#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27431;
_Bool var_1 = (_Bool)0;
signed char var_6 = (signed char)97;
int zero = 0;
unsigned int var_20 = 3308212996U;
signed char var_21 = (signed char)102;
unsigned int var_22 = 795473461U;
unsigned int var_23 = 3277458679U;
unsigned int arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 2236204167U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
