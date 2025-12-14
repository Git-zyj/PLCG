#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21825;
short var_5 = (short)8098;
short var_9 = (short)9355;
short var_10 = (short)-25427;
int zero = 0;
short var_17 = (short)-12819;
unsigned long long int var_18 = 11068681845161235557ULL;
unsigned long long int var_19 = 4333037406454290146ULL;
short var_20 = (short)23825;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
