#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-30;
unsigned long long int var_3 = 13073565990019124498ULL;
signed char var_5 = (signed char)-61;
signed char var_8 = (signed char)-2;
unsigned long long int var_9 = 3911491952120937163ULL;
signed char var_11 = (signed char)20;
signed char var_12 = (signed char)-12;
int zero = 0;
int var_14 = 237641305;
signed char var_15 = (signed char)119;
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
