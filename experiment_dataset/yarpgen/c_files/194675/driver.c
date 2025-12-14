#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2292691581816450477ULL;
signed char var_9 = (signed char)-58;
unsigned int var_11 = 3193025924U;
short var_19 = (short)30221;
int zero = 0;
int var_20 = 553683819;
unsigned char var_21 = (unsigned char)248;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
