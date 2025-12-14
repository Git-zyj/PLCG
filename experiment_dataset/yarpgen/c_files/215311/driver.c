#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13276775692123142248ULL;
int var_3 = -647534564;
unsigned char var_9 = (unsigned char)116;
signed char var_16 = (signed char)-15;
long long int var_18 = 1753706755896106123LL;
int zero = 0;
unsigned int var_19 = 2852923057U;
signed char var_20 = (signed char)-92;
short var_21 = (short)-26792;
void init() {
}

void checksum() {
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
