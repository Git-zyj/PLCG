#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11495924294380658782ULL;
unsigned long long int var_4 = 7520557915711538674ULL;
unsigned long long int var_6 = 17355467764666817018ULL;
unsigned long long int var_13 = 2158101959945485556ULL;
unsigned long long int var_14 = 17927298036053291524ULL;
unsigned short var_15 = (unsigned short)38677;
long long int var_17 = -8803034858210899154LL;
int zero = 0;
unsigned long long int var_20 = 16220639335175412955ULL;
int var_21 = 2077935429;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
