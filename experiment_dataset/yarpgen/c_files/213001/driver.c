#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)64;
unsigned char var_2 = (unsigned char)119;
unsigned int var_4 = 3875932409U;
unsigned int var_7 = 383331837U;
int zero = 0;
unsigned long long int var_12 = 4094600999609124732ULL;
signed char var_13 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
