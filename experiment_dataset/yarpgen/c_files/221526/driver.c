#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 386560351U;
signed char var_6 = (signed char)-88;
int var_9 = -63326591;
unsigned char var_11 = (unsigned char)115;
int zero = 0;
unsigned short var_12 = (unsigned short)11531;
unsigned char var_13 = (unsigned char)112;
unsigned long long int var_14 = 430149152602505545ULL;
unsigned int var_15 = 2447024983U;
unsigned int var_16 = 2900150747U;
int arr_1 [10] ;
unsigned char arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -161069266;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)80;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
