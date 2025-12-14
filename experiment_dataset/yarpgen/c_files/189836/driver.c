#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3348412549U;
short var_5 = (short)-29326;
unsigned int var_7 = 1621135659U;
signed char var_10 = (signed char)19;
int zero = 0;
unsigned short var_11 = (unsigned short)58632;
signed char var_12 = (signed char)-103;
unsigned int var_13 = 1906718830U;
short var_14 = (short)-20546;
unsigned short var_15 = (unsigned short)43114;
unsigned int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 474890680U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
