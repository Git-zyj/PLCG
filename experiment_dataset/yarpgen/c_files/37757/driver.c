#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 315366832;
unsigned long long int var_2 = 18319621943803879402ULL;
unsigned long long int var_3 = 16369392532273933129ULL;
long long int var_7 = 8506304085715342347LL;
int var_8 = 745333336;
unsigned char var_9 = (unsigned char)42;
signed char var_10 = (signed char)70;
unsigned int var_11 = 1725612816U;
unsigned char var_12 = (unsigned char)59;
int zero = 0;
int var_13 = 1051057385;
int var_14 = -262180799;
signed char var_15 = (signed char)82;
long long int var_16 = -1983957461393962550LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
