#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)127;
unsigned char var_3 = (unsigned char)94;
long long int var_5 = -3267304941320056980LL;
unsigned long long int var_7 = 13956443052364676635ULL;
long long int var_12 = -2551606638904553432LL;
int zero = 0;
unsigned char var_13 = (unsigned char)199;
long long int var_14 = -3101363159901949995LL;
unsigned long long int var_15 = 15980280232079192536ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
