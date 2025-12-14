#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)169;
unsigned char var_5 = (unsigned char)31;
int var_8 = -1416378977;
int zero = 0;
unsigned int var_18 = 1133462711U;
unsigned char var_19 = (unsigned char)237;
unsigned int var_20 = 3499993692U;
long long int var_21 = 5533369324196849384LL;
int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 1374509948;
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
