#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)14658;
unsigned short var_17 = (unsigned short)50361;
int zero = 0;
unsigned char var_18 = (unsigned char)201;
long long int var_19 = 3721894781598283808LL;
unsigned long long int var_20 = 4669267276510070153ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
