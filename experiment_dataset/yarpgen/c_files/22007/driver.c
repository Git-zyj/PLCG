#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-18;
unsigned long long int var_2 = 17087911777258587433ULL;
long long int var_9 = 6396667002305654691LL;
int zero = 0;
signed char var_10 = (signed char)-52;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 4905489564772010501ULL;
unsigned long long int var_13 = 12509285340147966056ULL;
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
