#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13316416812738206004ULL;
signed char var_1 = (signed char)91;
unsigned long long int var_2 = 10110350743450061896ULL;
int var_3 = -2067699161;
signed char var_5 = (signed char)-56;
unsigned int var_9 = 2564241102U;
unsigned int var_10 = 1067452632U;
unsigned short var_13 = (unsigned short)44104;
int zero = 0;
unsigned long long int var_15 = 10027633581999981000ULL;
unsigned int var_16 = 3370446637U;
int var_17 = -1149388732;
unsigned long long int var_18 = 5092126185779134675ULL;
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
