#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)754;
unsigned long long int var_11 = 10408099574383426915ULL;
signed char var_15 = (signed char)-56;
unsigned long long int var_19 = 1079528064646525187ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)229;
short var_21 = (short)5807;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
