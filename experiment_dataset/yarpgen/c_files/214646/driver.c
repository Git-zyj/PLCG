#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1801523684U;
long long int var_15 = 2046247135582775956LL;
unsigned char var_17 = (unsigned char)105;
long long int var_19 = -3488665391382368498LL;
int zero = 0;
unsigned char var_20 = (unsigned char)191;
unsigned long long int var_21 = 3712570358188956498ULL;
short var_22 = (short)15461;
unsigned char var_23 = (unsigned char)8;
unsigned char var_24 = (unsigned char)132;
short arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)6563;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
