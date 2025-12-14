#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 572796178U;
signed char var_10 = (signed char)1;
unsigned int var_11 = 2798857664U;
signed char var_16 = (signed char)97;
int zero = 0;
long long int var_20 = -8529716280884502998LL;
signed char var_21 = (signed char)-26;
long long int var_22 = -7936999063942712887LL;
void init() {
}

void checksum() {
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
