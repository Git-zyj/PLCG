#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
unsigned long long int var_1 = 11981569637974429823ULL;
short var_2 = (short)-16144;
unsigned char var_10 = (unsigned char)146;
int zero = 0;
signed char var_15 = (signed char)-72;
long long int var_16 = -8507395452085045584LL;
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
