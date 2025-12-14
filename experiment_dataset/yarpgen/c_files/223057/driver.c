#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-7;
unsigned int var_6 = 2783704957U;
_Bool var_11 = (_Bool)1;
unsigned short var_15 = (unsigned short)28220;
int zero = 0;
unsigned int var_19 = 2325795933U;
signed char var_20 = (signed char)-52;
unsigned short var_21 = (unsigned short)19853;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)78;
unsigned int var_24 = 1198320182U;
int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -992046324;
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
