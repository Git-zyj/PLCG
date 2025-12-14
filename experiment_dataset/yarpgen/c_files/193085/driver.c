#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -667738900;
long long int var_8 = -7128049058635628786LL;
int zero = 0;
unsigned short var_12 = (unsigned short)58065;
unsigned long long int var_13 = 5607270321480820054ULL;
int var_14 = -2079790084;
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
