#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 82862217U;
unsigned long long int var_6 = 1550314151632738962ULL;
unsigned char var_9 = (unsigned char)246;
unsigned long long int var_10 = 14143398847085471772ULL;
unsigned long long int var_11 = 3102157057351204686ULL;
unsigned int var_13 = 2731052590U;
unsigned long long int var_16 = 14793006641098152213ULL;
int var_19 = -1665329008;
int zero = 0;
unsigned int var_20 = 482268404U;
unsigned long long int var_21 = 18371540876098135577ULL;
unsigned long long int var_22 = 6115547988174229565ULL;
unsigned char var_23 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
