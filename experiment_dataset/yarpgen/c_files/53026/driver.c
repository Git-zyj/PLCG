#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7411428729620965544LL;
unsigned short var_5 = (unsigned short)10156;
int zero = 0;
unsigned short var_12 = (unsigned short)7218;
unsigned short var_13 = (unsigned short)16816;
unsigned int var_14 = 431288051U;
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
