#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5249757836005296233LL;
_Bool var_1 = (_Bool)0;
long long int var_3 = -151628727797065721LL;
unsigned int var_4 = 1145314523U;
unsigned short var_6 = (unsigned short)2767;
unsigned long long int var_8 = 17446017762625897869ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)196;
unsigned short var_12 = (unsigned short)29858;
signed char var_13 = (signed char)-24;
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
