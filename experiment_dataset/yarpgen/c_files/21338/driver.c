#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4704735100364967139LL;
unsigned int var_8 = 2949157017U;
unsigned long long int var_9 = 13539031276811792ULL;
int zero = 0;
int var_12 = 1602934242;
long long int var_13 = 6075332641957687861LL;
unsigned int var_14 = 4236991956U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
