#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1306212622U;
int var_4 = -147179381;
unsigned char var_8 = (unsigned char)198;
int var_9 = -1912041975;
signed char var_11 = (signed char)-16;
int zero = 0;
signed char var_14 = (signed char)-51;
unsigned int var_15 = 3620131927U;
short var_16 = (short)-16250;
void init() {
}

void checksum() {
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
