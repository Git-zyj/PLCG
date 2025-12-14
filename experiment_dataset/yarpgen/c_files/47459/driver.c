#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2318646341777927047ULL;
int var_1 = -504463150;
unsigned int var_2 = 3673281501U;
unsigned int var_4 = 669880874U;
unsigned int var_7 = 2871428733U;
unsigned long long int var_11 = 18297139193302672477ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)57441;
unsigned char var_13 = (unsigned char)154;
unsigned short var_14 = (unsigned short)34852;
int var_15 = 1667067703;
short var_16 = (short)32250;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
