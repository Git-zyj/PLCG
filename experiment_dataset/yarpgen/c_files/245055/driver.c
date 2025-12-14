#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6746519332599133994LL;
unsigned long long int var_2 = 6790857494656395118ULL;
int var_4 = 1051724859;
long long int var_6 = -3723148054760989112LL;
long long int var_9 = 7075721639290014897LL;
int zero = 0;
long long int var_11 = -1723386499014712222LL;
signed char var_12 = (signed char)16;
unsigned int var_13 = 3803342107U;
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
