#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)20;
long long int var_8 = -906062618897958230LL;
signed char var_17 = (signed char)-81;
int zero = 0;
unsigned int var_20 = 1233861675U;
int var_21 = 728136243;
unsigned long long int var_22 = 5598362205673727520ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
