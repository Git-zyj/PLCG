#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5534086750174508014LL;
long long int var_10 = 4701656086997474464LL;
long long int var_12 = -7991611082548842701LL;
long long int var_13 = 4315830717485940359LL;
int zero = 0;
long long int var_14 = -5334235026035989585LL;
long long int var_15 = -6589340063711261449LL;
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
