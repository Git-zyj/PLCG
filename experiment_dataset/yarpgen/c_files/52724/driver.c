#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31639;
signed char var_3 = (signed char)68;
unsigned long long int var_4 = 14177573902187264007ULL;
int var_8 = 29156187;
unsigned char var_9 = (unsigned char)25;
unsigned int var_15 = 152000170U;
short var_18 = (short)-30526;
int zero = 0;
unsigned char var_19 = (unsigned char)59;
unsigned long long int var_20 = 1871641512266813425ULL;
int var_21 = 1791955492;
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
