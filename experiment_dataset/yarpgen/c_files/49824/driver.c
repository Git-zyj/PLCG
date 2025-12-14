#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)51925;
unsigned int var_5 = 1764163422U;
unsigned long long int var_9 = 12645073639714037441ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)53;
unsigned char var_14 = (unsigned char)34;
signed char var_15 = (signed char)-81;
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
