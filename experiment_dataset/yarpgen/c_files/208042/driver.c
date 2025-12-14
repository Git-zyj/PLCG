#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1084854169;
long long int var_3 = 8788408394808113848LL;
_Bool var_5 = (_Bool)1;
int var_10 = -280285235;
long long int var_12 = 3973650679731715191LL;
int zero = 0;
unsigned long long int var_14 = 14904150680886431593ULL;
int var_15 = -1518530928;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
