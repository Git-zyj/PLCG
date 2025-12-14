#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27344;
int var_3 = -396922845;
long long int var_7 = -8338187915313475198LL;
long long int var_10 = 2420892744687085631LL;
int zero = 0;
int var_11 = -995454049;
unsigned char var_12 = (unsigned char)153;
long long int var_13 = 1701677821889449595LL;
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
