#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27885;
unsigned char var_1 = (unsigned char)79;
short var_4 = (short)-19940;
unsigned char var_6 = (unsigned char)167;
unsigned int var_9 = 3996725644U;
int zero = 0;
unsigned int var_12 = 386934891U;
signed char var_13 = (signed char)19;
unsigned int var_14 = 3918562918U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
