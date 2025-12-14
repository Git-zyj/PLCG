#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)21;
unsigned long long int var_4 = 7511248718924055698ULL;
unsigned short var_10 = (unsigned short)18202;
unsigned short var_11 = (unsigned short)28155;
int zero = 0;
unsigned char var_15 = (unsigned char)134;
long long int var_16 = 5896204451372023488LL;
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
