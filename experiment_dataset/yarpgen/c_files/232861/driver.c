#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5577;
short var_3 = (short)27654;
short var_5 = (short)19277;
unsigned short var_9 = (unsigned short)44050;
int zero = 0;
unsigned long long int var_10 = 9679059223669748256ULL;
signed char var_11 = (signed char)-60;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
