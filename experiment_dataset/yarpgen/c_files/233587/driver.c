#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31590;
signed char var_1 = (signed char)111;
long long int var_7 = -5516984691017467061LL;
unsigned char var_9 = (unsigned char)151;
unsigned char var_12 = (unsigned char)145;
int zero = 0;
unsigned char var_17 = (unsigned char)131;
unsigned int var_18 = 3904690718U;
void init() {
}

void checksum() {
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
