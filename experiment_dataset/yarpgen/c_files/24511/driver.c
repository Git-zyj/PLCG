#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2015258394255273889LL;
signed char var_4 = (signed char)-93;
unsigned int var_6 = 823429706U;
short var_9 = (short)-11973;
int var_12 = 133313795;
int zero = 0;
signed char var_18 = (signed char)19;
long long int var_19 = -3025358566883651005LL;
int var_20 = -2053914498;
int arr_0 [10] ;
unsigned int arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1411620859;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 110962341U;
}

void checksum() {
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
