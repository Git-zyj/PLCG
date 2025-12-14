#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 322176426;
int var_2 = -691418755;
int var_8 = 1782981246;
int zero = 0;
unsigned long long int var_18 = 3379970749121625290ULL;
signed char var_19 = (signed char)127;
int var_20 = 564551138;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
