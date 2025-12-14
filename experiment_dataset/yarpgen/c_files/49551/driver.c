#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4729513291455688110LL;
unsigned char var_3 = (unsigned char)204;
unsigned long long int var_5 = 9631835196614565128ULL;
short var_6 = (short)26476;
unsigned char var_9 = (unsigned char)128;
unsigned long long int var_12 = 9878714152526337893ULL;
unsigned int var_15 = 2999425690U;
int zero = 0;
unsigned int var_17 = 1975123881U;
unsigned int var_18 = 798987786U;
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
