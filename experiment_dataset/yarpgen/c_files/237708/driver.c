#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-65;
short var_10 = (short)-27891;
unsigned char var_14 = (unsigned char)128;
short var_15 = (short)-19810;
signed char var_17 = (signed char)100;
int zero = 0;
signed char var_18 = (signed char)53;
unsigned long long int var_19 = 11079890193419100440ULL;
unsigned long long int var_20 = 13827961586746389397ULL;
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
