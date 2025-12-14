#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)66;
unsigned long long int var_2 = 14591481623875411137ULL;
short var_3 = (short)26577;
signed char var_9 = (signed char)-9;
int zero = 0;
unsigned char var_11 = (unsigned char)86;
int var_12 = 1530596667;
unsigned char var_13 = (unsigned char)101;
void init() {
}

void checksum() {
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
