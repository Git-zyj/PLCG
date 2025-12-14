#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1280804522;
unsigned char var_5 = (unsigned char)60;
int var_7 = 1016242826;
signed char var_9 = (signed char)-23;
unsigned int var_15 = 2905541345U;
int var_17 = 240522094;
long long int var_18 = -8573557010544359155LL;
int zero = 0;
long long int var_19 = -7119876264201693313LL;
signed char var_20 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
