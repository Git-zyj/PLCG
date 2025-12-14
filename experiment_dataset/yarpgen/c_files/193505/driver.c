#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13315056523722508549ULL;
short var_3 = (short)-31035;
unsigned int var_8 = 641801011U;
unsigned int var_11 = 3540931043U;
int zero = 0;
unsigned long long int var_12 = 4647184936687002288ULL;
unsigned long long int var_13 = 12012153841835210852ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
