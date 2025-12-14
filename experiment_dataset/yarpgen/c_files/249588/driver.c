#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2124658703;
unsigned long long int var_4 = 11387296801519044458ULL;
int var_5 = 1311684521;
short var_13 = (short)-4792;
unsigned int var_14 = 1360982775U;
signed char var_15 = (signed char)-111;
int var_17 = 608953668;
int zero = 0;
unsigned int var_19 = 2769466947U;
signed char var_20 = (signed char)-53;
unsigned int var_21 = 347916861U;
unsigned int var_22 = 3447345982U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
