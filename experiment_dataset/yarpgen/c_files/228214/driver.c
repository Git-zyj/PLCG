#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)79;
unsigned char var_3 = (unsigned char)144;
unsigned long long int var_6 = 14211836992201647674ULL;
unsigned char var_10 = (unsigned char)57;
int var_11 = 348267934;
int var_13 = 307722069;
int zero = 0;
unsigned long long int var_14 = 5055039385025801992ULL;
int var_15 = -42809483;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
