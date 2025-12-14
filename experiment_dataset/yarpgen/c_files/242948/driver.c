#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)202;
signed char var_5 = (signed char)-47;
unsigned int var_7 = 2624293357U;
unsigned short var_12 = (unsigned short)58403;
unsigned int var_18 = 2973647330U;
int zero = 0;
unsigned long long int var_19 = 15870824893563391901ULL;
unsigned int var_20 = 476880714U;
void init() {
}

void checksum() {
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
