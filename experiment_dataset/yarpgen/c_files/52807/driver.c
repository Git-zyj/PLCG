#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29274;
int var_9 = 779860980;
short var_11 = (short)-22389;
int zero = 0;
unsigned long long int var_12 = 5959341970356682648ULL;
long long int var_13 = 5687741273356219794LL;
unsigned char var_14 = (unsigned char)212;
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
