#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21275;
signed char var_2 = (signed char)-57;
int var_5 = 1015618196;
unsigned int var_7 = 3462396898U;
unsigned short var_8 = (unsigned short)2009;
int zero = 0;
signed char var_11 = (signed char)-43;
unsigned int var_12 = 134464708U;
short var_13 = (short)-10205;
unsigned int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 4143436174U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
