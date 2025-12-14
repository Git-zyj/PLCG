#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-10780;
unsigned long long int var_4 = 10467601221356953494ULL;
long long int var_5 = -8141782029747977593LL;
int zero = 0;
long long int var_10 = 4434213315485049370LL;
unsigned int var_11 = 1084129092U;
short var_12 = (short)7068;
unsigned int var_13 = 2286206010U;
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
