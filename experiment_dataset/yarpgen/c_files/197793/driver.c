#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8822438454869020606LL;
int var_5 = -1192749043;
unsigned int var_8 = 1112392468U;
unsigned long long int var_9 = 14012421994868866079ULL;
int zero = 0;
unsigned long long int var_10 = 10459512512576573236ULL;
unsigned int var_11 = 3938847964U;
unsigned short var_12 = (unsigned short)56573;
int var_13 = 857908628;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
