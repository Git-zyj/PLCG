#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1961311401;
int var_5 = -1663625510;
unsigned long long int var_6 = 13563684069339163224ULL;
int zero = 0;
unsigned long long int var_13 = 13441244646643519401ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)21;
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
