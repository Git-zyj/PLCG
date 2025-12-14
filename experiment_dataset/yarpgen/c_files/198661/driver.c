#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-110;
unsigned char var_2 = (unsigned char)12;
unsigned long long int var_5 = 3326266655999594257ULL;
short var_6 = (short)-15403;
signed char var_9 = (signed char)12;
short var_15 = (short)21927;
int zero = 0;
short var_20 = (short)20736;
unsigned char var_21 = (unsigned char)147;
signed char var_22 = (signed char)-25;
void init() {
}

void checksum() {
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
