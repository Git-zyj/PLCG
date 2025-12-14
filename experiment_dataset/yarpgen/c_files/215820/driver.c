#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20443;
unsigned short var_1 = (unsigned short)6180;
signed char var_5 = (signed char)-28;
int zero = 0;
unsigned long long int var_14 = 14380529785243400891ULL;
unsigned long long int var_15 = 69544676495179532ULL;
unsigned long long int var_16 = 18443113339485104593ULL;
signed char var_17 = (signed char)111;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
