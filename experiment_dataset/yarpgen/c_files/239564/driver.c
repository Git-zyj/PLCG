#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2673411423812479463LL;
unsigned char var_3 = (unsigned char)254;
signed char var_4 = (signed char)79;
unsigned long long int var_5 = 12138814573813059357ULL;
unsigned long long int var_8 = 9876917118869601942ULL;
unsigned long long int var_9 = 18285367156874855851ULL;
long long int var_10 = -5093932370812558211LL;
int zero = 0;
signed char var_11 = (signed char)66;
long long int var_12 = 4118620603699334296LL;
signed char var_13 = (signed char)17;
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
