#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1313111083;
unsigned char var_1 = (unsigned char)68;
unsigned int var_6 = 1094631711U;
short var_7 = (short)-17674;
int zero = 0;
unsigned char var_12 = (unsigned char)217;
short var_13 = (short)22522;
short var_14 = (short)27357;
short var_15 = (short)8429;
unsigned int var_16 = 321925271U;
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
