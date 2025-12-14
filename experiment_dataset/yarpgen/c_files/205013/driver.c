#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3489917574U;
unsigned long long int var_9 = 5187719674228356303ULL;
long long int var_12 = -2754703593494432054LL;
int var_15 = 788731522;
unsigned long long int var_17 = 12917450022648625714ULL;
int zero = 0;
signed char var_19 = (signed char)50;
unsigned char var_20 = (unsigned char)123;
unsigned long long int var_21 = 4567339036882212708ULL;
signed char var_22 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
