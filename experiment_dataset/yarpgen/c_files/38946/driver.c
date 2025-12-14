#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-21;
long long int var_6 = -8973866843928711004LL;
unsigned int var_7 = 349809521U;
signed char var_8 = (signed char)106;
long long int var_10 = 4317751154456778697LL;
int zero = 0;
unsigned int var_11 = 332134976U;
unsigned char var_12 = (unsigned char)248;
signed char var_13 = (signed char)-124;
signed char var_14 = (signed char)-106;
unsigned int var_15 = 328425572U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
