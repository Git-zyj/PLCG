#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39938;
signed char var_2 = (signed char)-7;
signed char var_3 = (signed char)-110;
short var_9 = (short)23971;
int var_12 = -1282601056;
int zero = 0;
unsigned char var_15 = (unsigned char)238;
unsigned int var_16 = 2450020899U;
unsigned int var_17 = 1044319884U;
void init() {
}

void checksum() {
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
