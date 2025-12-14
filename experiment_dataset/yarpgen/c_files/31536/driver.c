#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1920031543;
signed char var_3 = (signed char)-127;
unsigned int var_5 = 2351308491U;
unsigned char var_7 = (unsigned char)127;
unsigned long long int var_11 = 2730072487220693105ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)18;
int var_21 = -327899525;
signed char var_22 = (signed char)-60;
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
