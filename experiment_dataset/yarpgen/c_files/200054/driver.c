#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -975003478;
short var_3 = (short)4972;
signed char var_6 = (signed char)64;
unsigned int var_8 = 296617319U;
unsigned char var_13 = (unsigned char)130;
int zero = 0;
unsigned int var_16 = 3774780896U;
unsigned long long int var_17 = 14190364731111750975ULL;
void init() {
}

void checksum() {
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
