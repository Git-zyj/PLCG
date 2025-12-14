#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1461;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 8543527644890485951ULL;
unsigned short var_4 = (unsigned short)45981;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)11147;
int zero = 0;
short var_11 = (short)18946;
unsigned int var_12 = 4163553324U;
long long int var_13 = -1718682637271397161LL;
unsigned long long int var_14 = 9627582657215485338ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
