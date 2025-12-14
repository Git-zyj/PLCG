#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23473;
int var_2 = -1608375017;
int var_4 = -763925899;
int zero = 0;
unsigned long long int var_10 = 1789171380169367702ULL;
unsigned int var_11 = 3501944282U;
int var_12 = -1349736449;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
