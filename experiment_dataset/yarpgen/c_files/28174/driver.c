#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16807;
short var_5 = (short)-27729;
short var_8 = (short)-27013;
unsigned long long int var_13 = 8716025930417946066ULL;
int zero = 0;
unsigned long long int var_17 = 15472140581262125215ULL;
unsigned long long int var_18 = 11094444067155756141ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
