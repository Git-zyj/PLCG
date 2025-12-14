#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-10;
unsigned int var_1 = 1515897247U;
unsigned long long int var_5 = 15281100518335173197ULL;
signed char var_13 = (signed char)-75;
short var_15 = (short)11831;
int zero = 0;
unsigned short var_17 = (unsigned short)23530;
unsigned long long int var_18 = 15882069915908666479ULL;
signed char var_19 = (signed char)-50;
unsigned short arr_0 [14] ;
int arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)55587;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -2104484663;
}

void checksum() {
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
