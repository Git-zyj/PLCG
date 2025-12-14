#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 8698157811642634209LL;
signed char var_9 = (signed char)67;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)1;
unsigned int var_14 = 361940105U;
int zero = 0;
unsigned char var_15 = (unsigned char)175;
unsigned int var_16 = 1902900449U;
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
