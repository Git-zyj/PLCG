#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1688493604;
signed char var_7 = (signed char)97;
unsigned long long int var_9 = 12975726744877758369ULL;
unsigned char var_14 = (unsigned char)176;
unsigned char var_19 = (unsigned char)74;
int zero = 0;
unsigned short var_20 = (unsigned short)25731;
int var_21 = 1803796398;
unsigned int var_22 = 2499084343U;
unsigned int var_23 = 1024237948U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
