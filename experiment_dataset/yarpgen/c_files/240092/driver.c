#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2316399598611370730LL;
long long int var_8 = -1898293978916837728LL;
long long int var_10 = -2303688211513458565LL;
int zero = 0;
long long int var_11 = 1268761754186158898LL;
long long int var_12 = -2325064454285000565LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
