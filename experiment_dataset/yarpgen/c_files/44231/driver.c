#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -73521689;
long long int var_11 = 2519494914502616285LL;
int var_12 = -1423523466;
int zero = 0;
unsigned long long int var_18 = 10902486069844971687ULL;
int var_19 = -693225201;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
