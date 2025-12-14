#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 474956748;
int var_2 = 1045616319;
long long int var_12 = 8843496339429552568LL;
int zero = 0;
long long int var_17 = 6512748414424617431LL;
long long int var_18 = 8843837965488380088LL;
long long int var_19 = -8057920144470393463LL;
signed char var_20 = (signed char)-123;
unsigned int var_21 = 2254895717U;
short arr_0 [14] ;
short arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-19744;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)12763;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
