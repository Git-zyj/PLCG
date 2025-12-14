#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-48;
signed char var_6 = (signed char)-125;
unsigned long long int var_7 = 17255844109808973593ULL;
int var_11 = 1202818195;
unsigned long long int var_15 = 5248280248283230422ULL;
unsigned long long int var_16 = 12951938801043268894ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)2972;
signed char var_19 = (signed char)27;
long long int var_20 = -1006425942319253274LL;
int var_21 = -170226343;
unsigned short var_22 = (unsigned short)50965;
signed char arr_0 [23] ;
unsigned int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 3652557699U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
