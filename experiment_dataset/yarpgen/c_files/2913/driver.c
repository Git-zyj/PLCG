#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3636;
unsigned char var_3 = (unsigned char)151;
unsigned int var_9 = 667672774U;
int zero = 0;
unsigned short var_10 = (unsigned short)37357;
unsigned int var_11 = 1977406285U;
signed char var_12 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
