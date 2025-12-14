#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17038;
unsigned short var_5 = (unsigned short)8631;
signed char var_12 = (signed char)18;
int zero = 0;
unsigned short var_15 = (unsigned short)47977;
unsigned long long int var_16 = 16926744241327637999ULL;
unsigned int var_17 = 3093976415U;
unsigned short var_18 = (unsigned short)53770;
unsigned short var_19 = (unsigned short)52578;
int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -689462084;
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
