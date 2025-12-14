#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16175;
unsigned long long int var_5 = 16917764795090374457ULL;
unsigned char var_10 = (unsigned char)242;
unsigned long long int var_14 = 13839175225250872188ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 3102473103234301121ULL;
signed char var_20 = (signed char)-87;
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
