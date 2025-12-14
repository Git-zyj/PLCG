#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)201;
signed char var_3 = (signed char)-48;
unsigned int var_5 = 2192746792U;
signed char var_6 = (signed char)-117;
unsigned long long int var_9 = 2414955003702311445ULL;
unsigned int var_10 = 914600540U;
unsigned int var_11 = 1740987937U;
int zero = 0;
unsigned short var_12 = (unsigned short)13639;
unsigned int var_13 = 2972711675U;
long long int var_14 = -7184173801782845472LL;
signed char var_15 = (signed char)23;
unsigned char var_16 = (unsigned char)254;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
