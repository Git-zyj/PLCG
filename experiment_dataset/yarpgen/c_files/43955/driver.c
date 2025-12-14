#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)30350;
unsigned int var_11 = 4013734904U;
unsigned long long int var_12 = 7031322072488014906ULL;
unsigned int var_14 = 2575048785U;
unsigned char var_16 = (unsigned char)35;
int zero = 0;
int var_19 = -729331881;
unsigned int var_20 = 4255362509U;
unsigned int var_21 = 4060783043U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
