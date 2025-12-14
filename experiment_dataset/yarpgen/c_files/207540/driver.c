#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1537492896U;
unsigned int var_12 = 1805323386U;
unsigned long long int var_13 = 11852784511831152989ULL;
signed char var_15 = (signed char)104;
unsigned int var_16 = 1172022562U;
int zero = 0;
signed char var_18 = (signed char)-113;
int var_19 = 801489382;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
