#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 437833477U;
unsigned int var_9 = 2611082316U;
unsigned char var_10 = (unsigned char)68;
short var_15 = (short)-13891;
int zero = 0;
unsigned char var_18 = (unsigned char)154;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)237;
unsigned long long int var_21 = 11993125703449902631ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
