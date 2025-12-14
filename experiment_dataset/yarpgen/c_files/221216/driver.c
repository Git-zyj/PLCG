#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)70;
int var_3 = 1055647857;
unsigned long long int var_4 = 300054547212746016ULL;
unsigned char var_6 = (unsigned char)195;
unsigned long long int var_11 = 14682367842598025686ULL;
int zero = 0;
int var_12 = -587765263;
int var_13 = 1819722140;
unsigned char var_14 = (unsigned char)39;
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
