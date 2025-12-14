#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
signed char var_2 = (signed char)-81;
unsigned long long int var_4 = 1484255449561033218ULL;
int var_10 = -1109477348;
signed char var_11 = (signed char)-16;
unsigned int var_12 = 1849802721U;
int zero = 0;
unsigned char var_14 = (unsigned char)67;
unsigned int var_15 = 1521009243U;
unsigned short var_16 = (unsigned short)61789;
_Bool var_17 = (_Bool)1;
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
