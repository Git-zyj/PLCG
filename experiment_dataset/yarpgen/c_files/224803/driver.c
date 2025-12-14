#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)112;
short var_5 = (short)10394;
unsigned char var_6 = (unsigned char)189;
unsigned long long int var_7 = 6544193559631993712ULL;
int zero = 0;
unsigned int var_10 = 3782332604U;
int var_11 = 1841251745;
unsigned short var_12 = (unsigned short)19661;
long long int var_13 = -7853952551093144130LL;
void init() {
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
