#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)11787;
unsigned long long int var_5 = 5407076516351391447ULL;
unsigned short var_6 = (unsigned short)23580;
short var_7 = (short)25324;
short var_9 = (short)-17839;
short var_10 = (short)29656;
int var_14 = 819002187;
int zero = 0;
int var_17 = 1673406755;
signed char var_18 = (signed char)42;
signed char var_19 = (signed char)-30;
int var_20 = 22401474;
unsigned long long int var_21 = 6907886443006328073ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
