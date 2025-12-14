#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -996847754;
signed char var_3 = (signed char)100;
unsigned long long int var_4 = 11501049557224231020ULL;
long long int var_5 = -6291250155435818704LL;
short var_6 = (short)-25538;
unsigned long long int var_7 = 8589445807502558883ULL;
signed char var_8 = (signed char)-17;
int zero = 0;
signed char var_10 = (signed char)64;
unsigned long long int var_11 = 10671126516748661844ULL;
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
