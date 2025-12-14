#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)74;
unsigned long long int var_7 = 4789197555105465443ULL;
signed char var_8 = (signed char)-22;
signed char var_9 = (signed char)91;
unsigned char var_11 = (unsigned char)129;
int zero = 0;
unsigned long long int var_13 = 4015421750707032487ULL;
unsigned char var_14 = (unsigned char)24;
unsigned int var_15 = 1547209901U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
