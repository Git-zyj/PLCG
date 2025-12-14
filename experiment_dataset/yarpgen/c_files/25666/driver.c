#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1927919217U;
unsigned int var_9 = 2323266061U;
int zero = 0;
short var_12 = (short)-2272;
unsigned long long int var_13 = 7720049766347609290ULL;
unsigned long long int var_14 = 2569521976327786485ULL;
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
