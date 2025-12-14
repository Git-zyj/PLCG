#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8947446293507647061LL;
unsigned int var_7 = 2898681002U;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_13 = -3936994496705940915LL;
unsigned long long int var_14 = 4552940000417157992ULL;
long long int var_15 = 1784559501154641445LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
