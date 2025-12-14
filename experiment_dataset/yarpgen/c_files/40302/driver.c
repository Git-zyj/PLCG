#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16283741856934780910ULL;
unsigned char var_3 = (unsigned char)119;
unsigned long long int var_6 = 4918866316860963007ULL;
unsigned char var_11 = (unsigned char)246;
unsigned char var_12 = (unsigned char)156;
unsigned short var_13 = (unsigned short)40422;
unsigned char var_14 = (unsigned char)11;
int zero = 0;
int var_15 = 1923066715;
short var_16 = (short)-31251;
unsigned short var_17 = (unsigned short)25977;
unsigned char var_18 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
