#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -9153022457876674892LL;
unsigned short var_10 = (unsigned short)61904;
signed char var_13 = (signed char)109;
int zero = 0;
unsigned int var_18 = 243820677U;
signed char var_19 = (signed char)95;
unsigned char var_20 = (unsigned char)167;
unsigned long long int var_21 = 709872577328845688ULL;
unsigned short arr_1 [20] ;
unsigned char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)57647;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)130;
}

void checksum() {
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
