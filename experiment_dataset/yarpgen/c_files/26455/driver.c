#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6286;
long long int var_6 = -2167638615532121660LL;
unsigned char var_7 = (unsigned char)75;
int var_9 = 699422409;
int zero = 0;
unsigned int var_15 = 2561487396U;
int var_16 = -395203363;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
