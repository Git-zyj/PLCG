#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36592;
int var_8 = -1422179259;
unsigned int var_9 = 2653719006U;
unsigned short var_10 = (unsigned short)61146;
unsigned int var_12 = 1088082488U;
unsigned char var_13 = (unsigned char)53;
unsigned long long int var_16 = 9189502397809659888ULL;
unsigned int var_17 = 1465347774U;
long long int var_18 = 900214999723649425LL;
int zero = 0;
int var_20 = 1364261391;
unsigned short var_21 = (unsigned short)7782;
signed char var_22 = (signed char)-98;
unsigned char var_23 = (unsigned char)164;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
