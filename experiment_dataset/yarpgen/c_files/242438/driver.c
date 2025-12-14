#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)29751;
unsigned char var_18 = (unsigned char)110;
short var_19 = (short)29032;
int zero = 0;
unsigned long long int var_20 = 8954845228823625360ULL;
unsigned int var_21 = 986239910U;
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
