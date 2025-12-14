#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)209;
unsigned int var_5 = 2954053047U;
unsigned long long int var_6 = 4846661252929331251ULL;
short var_8 = (short)26059;
short var_9 = (short)7346;
int zero = 0;
unsigned int var_11 = 3851319905U;
unsigned long long int var_12 = 4149572522135836661ULL;
unsigned short var_13 = (unsigned short)18978;
unsigned int var_14 = 1301962293U;
unsigned char var_15 = (unsigned char)95;
short var_16 = (short)7311;
unsigned int var_17 = 1929063127U;
unsigned char arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)207;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
