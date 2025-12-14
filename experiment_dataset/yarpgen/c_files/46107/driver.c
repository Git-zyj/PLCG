#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19734;
signed char var_2 = (signed char)-14;
int var_7 = 482804421;
int zero = 0;
int var_11 = 1891538034;
unsigned long long int var_12 = 5333246579362198333ULL;
short var_13 = (short)21275;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
