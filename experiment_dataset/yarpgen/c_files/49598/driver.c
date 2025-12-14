#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)64;
signed char var_11 = (signed char)-105;
long long int var_12 = 3875245083797524017LL;
int zero = 0;
unsigned short var_14 = (unsigned short)48050;
signed char var_15 = (signed char)-10;
unsigned short var_16 = (unsigned short)12114;
long long int var_17 = -4924091482806270638LL;
_Bool arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
