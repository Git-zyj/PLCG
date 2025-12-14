#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
unsigned long long int var_1 = 9024541676031160278ULL;
signed char var_5 = (signed char)12;
signed char var_9 = (signed char)88;
unsigned long long int var_15 = 11673229680537967237ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)7661;
unsigned char var_18 = (unsigned char)93;
unsigned long long int var_19 = 7176678569267633561ULL;
signed char var_20 = (signed char)68;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
