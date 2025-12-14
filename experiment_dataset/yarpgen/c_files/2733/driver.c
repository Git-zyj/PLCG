#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9053447290692075482ULL;
unsigned long long int var_5 = 17283041468839161259ULL;
signed char var_7 = (signed char)82;
unsigned long long int var_9 = 11230978921530800424ULL;
int zero = 0;
unsigned long long int var_11 = 15351610075152382038ULL;
signed char var_12 = (signed char)-7;
signed char var_13 = (signed char)120;
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
