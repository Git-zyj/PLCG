#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)31;
unsigned int var_5 = 1416814781U;
unsigned char var_8 = (unsigned char)79;
signed char var_9 = (signed char)-100;
unsigned int var_10 = 1151203211U;
int zero = 0;
signed char var_16 = (signed char)78;
unsigned char var_17 = (unsigned char)68;
unsigned char var_18 = (unsigned char)59;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
