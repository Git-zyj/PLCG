#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1768748183443402058ULL;
unsigned int var_2 = 104312248U;
signed char var_3 = (signed char)36;
short var_5 = (short)-19778;
signed char var_6 = (signed char)37;
short var_8 = (short)-2869;
int zero = 0;
signed char var_12 = (signed char)8;
long long int var_13 = -6910061832077526969LL;
unsigned char var_14 = (unsigned char)61;
unsigned short var_15 = (unsigned short)51954;
short arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-6658;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
