#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 946178688903261088LL;
unsigned int var_5 = 2185918768U;
unsigned short var_9 = (unsigned short)63373;
signed char var_13 = (signed char)5;
int zero = 0;
unsigned long long int var_15 = 13970885512664505475ULL;
unsigned int var_16 = 1685979748U;
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
