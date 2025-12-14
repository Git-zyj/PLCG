#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3340802039823022834LL;
unsigned long long int var_2 = 6895409701075544332ULL;
int var_5 = -1708322967;
unsigned short var_11 = (unsigned short)56118;
short var_12 = (short)-835;
int zero = 0;
int var_13 = 1735010170;
short var_14 = (short)10179;
void init() {
}

void checksum() {
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
