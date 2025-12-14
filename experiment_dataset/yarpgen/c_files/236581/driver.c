#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3809666085730190171ULL;
long long int var_3 = -6884661246288505947LL;
unsigned short var_7 = (unsigned short)28243;
int zero = 0;
unsigned int var_11 = 1197069770U;
signed char var_12 = (signed char)18;
long long int var_13 = -6825979712811814756LL;
void init() {
}

void checksum() {
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
