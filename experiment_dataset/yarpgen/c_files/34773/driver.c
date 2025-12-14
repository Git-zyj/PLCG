#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-14;
unsigned int var_1 = 3235613120U;
unsigned int var_2 = 2776212759U;
long long int var_3 = -5022191951957276335LL;
long long int var_4 = -7170683575913259983LL;
unsigned int var_5 = 3363449447U;
unsigned int var_6 = 119675990U;
int var_9 = 1305452351;
unsigned long long int var_10 = 1636888651177660148ULL;
int zero = 0;
unsigned int var_12 = 1967401002U;
long long int var_13 = -5413920830066471358LL;
int var_14 = 1563447825;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
