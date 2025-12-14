#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -155548101;
long long int var_2 = -5204419381806508739LL;
_Bool var_5 = (_Bool)1;
short var_7 = (short)20552;
int var_8 = -137315596;
int zero = 0;
unsigned short var_10 = (unsigned short)14600;
unsigned long long int var_11 = 11510263546880892172ULL;
int var_12 = -407495577;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
