#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
int var_3 = -1923563158;
int var_5 = -721049267;
unsigned char var_8 = (unsigned char)140;
unsigned char var_9 = (unsigned char)47;
int zero = 0;
long long int var_15 = 5583880611259155128LL;
int var_16 = 931917832;
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
