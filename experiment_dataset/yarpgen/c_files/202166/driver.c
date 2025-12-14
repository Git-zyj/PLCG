#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1133522651339751745LL;
unsigned long long int var_6 = 15351772674864832580ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)31662;
unsigned long long int var_13 = 15828387042886422178ULL;
void init() {
}

void checksum() {
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
