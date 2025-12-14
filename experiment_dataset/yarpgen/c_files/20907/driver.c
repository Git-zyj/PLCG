#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 58381762U;
unsigned short var_6 = (unsigned short)52411;
int var_13 = 904658262;
int zero = 0;
int var_14 = -953627204;
unsigned short var_15 = (unsigned short)2321;
int var_16 = 2093545401;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
