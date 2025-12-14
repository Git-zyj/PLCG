#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8190872053649449566LL;
unsigned char var_5 = (unsigned char)64;
int zero = 0;
unsigned short var_12 = (unsigned short)7667;
unsigned int var_13 = 3934650913U;
unsigned short var_14 = (unsigned short)65513;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
