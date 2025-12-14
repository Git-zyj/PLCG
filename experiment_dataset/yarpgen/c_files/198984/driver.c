#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15801067440914602508ULL;
short var_4 = (short)24948;
int var_6 = -1701850349;
int var_9 = 312956621;
short var_11 = (short)28913;
int var_13 = -1538022825;
short var_14 = (short)18062;
int zero = 0;
short var_16 = (short)-6255;
long long int var_17 = -2858743518298695088LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
