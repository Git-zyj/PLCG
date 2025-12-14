#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18299720513032634715ULL;
int var_9 = -1066022760;
unsigned short var_10 = (unsigned short)64038;
int zero = 0;
int var_12 = -2047907864;
unsigned short var_13 = (unsigned short)43543;
int var_14 = 2100757876;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
