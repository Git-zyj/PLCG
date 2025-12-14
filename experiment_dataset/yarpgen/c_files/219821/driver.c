#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)222;
unsigned short var_8 = (unsigned short)2273;
unsigned char var_14 = (unsigned char)61;
unsigned short var_15 = (unsigned short)45368;
int zero = 0;
unsigned long long int var_18 = 2561844762421593267ULL;
unsigned long long int var_19 = 12709030896602495172ULL;
signed char var_20 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
