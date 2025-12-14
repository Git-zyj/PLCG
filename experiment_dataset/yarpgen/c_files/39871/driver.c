#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -902895751;
int var_5 = 811409807;
unsigned char var_6 = (unsigned char)220;
int zero = 0;
short var_10 = (short)2915;
unsigned int var_11 = 4010283410U;
unsigned int var_12 = 3337738825U;
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
