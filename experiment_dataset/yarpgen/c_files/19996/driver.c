#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1761357688U;
long long int var_6 = -1634309279883105311LL;
unsigned long long int var_9 = 9069202597381800914ULL;
int zero = 0;
short var_19 = (short)16029;
long long int var_20 = -8851323153004235843LL;
unsigned int var_21 = 253782680U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
