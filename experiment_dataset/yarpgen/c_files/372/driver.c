#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3694285173755535034ULL;
unsigned long long int var_1 = 7601529998781108454ULL;
int var_2 = 1893149603;
short var_8 = (short)8416;
unsigned int var_12 = 3662048573U;
int zero = 0;
unsigned long long int var_14 = 12816293531033027415ULL;
signed char var_15 = (signed char)-10;
unsigned char var_16 = (unsigned char)89;
unsigned long long int var_17 = 13618768961875787729ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
