#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)178;
unsigned long long int var_10 = 11862928897596369353ULL;
unsigned long long int var_13 = 12972651026246947921ULL;
int zero = 0;
short var_17 = (short)-2847;
unsigned long long int var_18 = 2320525441334190988ULL;
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
