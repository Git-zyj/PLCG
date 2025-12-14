#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)33607;
signed char var_10 = (signed char)67;
unsigned short var_11 = (unsigned short)57797;
unsigned int var_12 = 3118146746U;
signed char var_17 = (signed char)75;
int zero = 0;
signed char var_19 = (signed char)82;
unsigned int var_20 = 2461362225U;
unsigned char var_21 = (unsigned char)76;
unsigned short var_22 = (unsigned short)41207;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
