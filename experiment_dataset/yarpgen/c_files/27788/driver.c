#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6185697048733965461LL;
unsigned char var_1 = (unsigned char)66;
unsigned int var_8 = 1279150969U;
int zero = 0;
int var_16 = 257044784;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 17034494657328890882ULL;
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
