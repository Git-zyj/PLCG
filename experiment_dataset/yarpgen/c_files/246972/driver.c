#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3131;
unsigned long long int var_4 = 8245278487768564633ULL;
long long int var_6 = -9113523104156288633LL;
signed char var_8 = (signed char)-103;
int var_9 = 101223715;
unsigned int var_14 = 2624192688U;
int zero = 0;
unsigned long long int var_15 = 3726431540651564949ULL;
short var_16 = (short)-15696;
long long int var_17 = -358835031131390182LL;
short var_18 = (short)26968;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
