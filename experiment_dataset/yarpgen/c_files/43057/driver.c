#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_13 = (signed char)-14;
long long int var_18 = 8332745769845651272LL;
int zero = 0;
signed char var_20 = (signed char)-101;
long long int var_21 = -8849636890940109392LL;
long long int var_22 = -6729385986915756913LL;
long long int var_23 = 733565374530882516LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
