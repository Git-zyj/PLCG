#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4582750514459392775LL;
long long int var_3 = -2765849134541564137LL;
long long int var_15 = -3489140323872954826LL;
int zero = 0;
long long int var_18 = 3627129528301542166LL;
long long int var_19 = -6903508615577533338LL;
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
