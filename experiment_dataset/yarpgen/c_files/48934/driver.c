#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4780418106119285732ULL;
signed char var_5 = (signed char)-127;
int var_9 = -2019178499;
unsigned char var_10 = (unsigned char)61;
unsigned short var_12 = (unsigned short)40533;
unsigned long long int var_14 = 14777850721972224480ULL;
unsigned long long int var_15 = 1898626170676431806ULL;
int zero = 0;
short var_17 = (short)-30540;
unsigned char var_18 = (unsigned char)168;
signed char var_19 = (signed char)72;
int var_20 = -1650804792;
int var_21 = -782740414;
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
