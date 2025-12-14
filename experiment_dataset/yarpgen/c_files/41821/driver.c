#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5832662163016533296ULL;
unsigned int var_1 = 2348774218U;
int var_4 = 639400670;
signed char var_5 = (signed char)113;
unsigned long long int var_8 = 4953944773080100085ULL;
signed char var_9 = (signed char)11;
unsigned long long int var_10 = 15013264711185889788ULL;
unsigned int var_12 = 407263788U;
unsigned char var_15 = (unsigned char)246;
int zero = 0;
signed char var_18 = (signed char)-53;
unsigned long long int var_19 = 5898767337251332535ULL;
unsigned int var_20 = 3397017888U;
unsigned long long int var_21 = 1847018589281810776ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
