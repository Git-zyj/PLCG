#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-43;
unsigned int var_9 = 3956019469U;
unsigned int var_10 = 4145690071U;
unsigned char var_11 = (unsigned char)123;
unsigned char var_12 = (unsigned char)244;
int var_14 = 1315613947;
signed char var_17 = (signed char)106;
int zero = 0;
unsigned int var_18 = 1874183367U;
signed char var_19 = (signed char)101;
unsigned char var_20 = (unsigned char)128;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
