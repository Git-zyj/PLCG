#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 256228767U;
unsigned long long int var_1 = 583326308672511980ULL;
unsigned char var_2 = (unsigned char)200;
signed char var_4 = (signed char)-34;
unsigned long long int var_8 = 10751078203749837905ULL;
signed char var_9 = (signed char)-108;
int zero = 0;
int var_13 = 1507009411;
unsigned long long int var_14 = 9580311426315432540ULL;
unsigned int var_15 = 1990257454U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
