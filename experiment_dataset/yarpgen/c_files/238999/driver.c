#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1373770405686773066ULL;
short var_6 = (short)5785;
int zero = 0;
unsigned long long int var_13 = 14463000389728847937ULL;
unsigned char var_14 = (unsigned char)191;
unsigned char var_15 = (unsigned char)25;
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
