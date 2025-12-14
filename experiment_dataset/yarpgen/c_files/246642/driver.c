#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)12274;
unsigned int var_12 = 2892446775U;
unsigned int var_14 = 2803161803U;
unsigned char var_17 = (unsigned char)67;
int zero = 0;
unsigned long long int var_19 = 9236950725353365120ULL;
unsigned long long int var_20 = 11536539528449081595ULL;
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
