#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)45;
unsigned short var_3 = (unsigned short)47258;
unsigned char var_8 = (unsigned char)133;
unsigned int var_9 = 1263892648U;
unsigned short var_11 = (unsigned short)13782;
signed char var_12 = (signed char)34;
int zero = 0;
unsigned char var_13 = (unsigned char)54;
unsigned int var_14 = 429374969U;
signed char var_15 = (signed char)25;
unsigned char var_16 = (unsigned char)181;
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
