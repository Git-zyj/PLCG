#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 505827660922672508LL;
unsigned long long int var_11 = 18066108309533311249ULL;
int zero = 0;
signed char var_13 = (signed char)51;
long long int var_14 = -4875389664083987178LL;
unsigned long long int var_15 = 17427304223957232995ULL;
unsigned short var_16 = (unsigned short)58614;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
