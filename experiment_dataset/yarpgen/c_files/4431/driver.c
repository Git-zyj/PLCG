#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)28;
signed char var_3 = (signed char)105;
unsigned int var_4 = 14588548U;
long long int var_6 = -7428661355865493020LL;
unsigned char var_11 = (unsigned char)81;
short var_14 = (short)17462;
long long int var_15 = -8698085696667271638LL;
int zero = 0;
long long int var_18 = -8490562462965675978LL;
long long int var_19 = 4104774515416633963LL;
unsigned short var_20 = (unsigned short)11884;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
