#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21130;
unsigned int var_4 = 3412186178U;
unsigned long long int var_5 = 2969213511105571619ULL;
int var_7 = -1178971480;
unsigned int var_9 = 2690207684U;
unsigned int var_12 = 2684312647U;
int zero = 0;
unsigned int var_13 = 2028298167U;
signed char var_14 = (signed char)-107;
short var_15 = (short)-5966;
unsigned int var_16 = 4052912753U;
void init() {
}

void checksum() {
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
