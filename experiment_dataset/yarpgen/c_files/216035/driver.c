#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1059905861;
int var_4 = 2114396593;
unsigned long long int var_6 = 15552734260088271167ULL;
unsigned char var_7 = (unsigned char)169;
unsigned char var_8 = (unsigned char)200;
unsigned short var_10 = (unsigned short)64707;
long long int var_12 = -8129333675495211417LL;
signed char var_15 = (signed char)52;
int zero = 0;
unsigned long long int var_16 = 6263402315868676242ULL;
short var_17 = (short)-15835;
signed char var_18 = (signed char)59;
long long int var_19 = -2092803716272484350LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
