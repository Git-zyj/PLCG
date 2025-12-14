#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1846164267U;
unsigned int var_2 = 1278395388U;
signed char var_3 = (signed char)81;
int zero = 0;
signed char var_10 = (signed char)-15;
unsigned char var_11 = (unsigned char)151;
unsigned char var_12 = (unsigned char)116;
signed char var_13 = (signed char)31;
long long int arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -3072571220040244327LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
