#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7556058153939043933LL;
long long int var_7 = -1328557183381700962LL;
unsigned long long int var_8 = 12245715982540684532ULL;
long long int var_10 = 1444979276897712279LL;
int zero = 0;
int var_12 = 1034512709;
unsigned long long int var_13 = 6130123107014979599ULL;
void init() {
}

void checksum() {
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
