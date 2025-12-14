#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8742423187900388714LL;
unsigned long long int var_2 = 14825946812614664606ULL;
signed char var_5 = (signed char)-8;
unsigned char var_7 = (unsigned char)196;
signed char var_8 = (signed char)-83;
unsigned char var_11 = (unsigned char)106;
int zero = 0;
signed char var_12 = (signed char)4;
unsigned long long int var_13 = 1576961618954821228ULL;
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
