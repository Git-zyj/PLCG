#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11834225109186746393ULL;
long long int var_9 = -8912508549491786876LL;
int zero = 0;
unsigned long long int var_10 = 15492623663004284373ULL;
signed char var_11 = (signed char)124;
signed char var_12 = (signed char)-66;
unsigned long long int var_13 = 13157963344138601307ULL;
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
