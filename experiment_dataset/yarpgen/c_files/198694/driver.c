#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 300780990249053995ULL;
unsigned int var_1 = 3518320093U;
unsigned short var_6 = (unsigned short)49212;
unsigned int var_9 = 585902366U;
int zero = 0;
unsigned short var_15 = (unsigned short)28283;
signed char var_16 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
