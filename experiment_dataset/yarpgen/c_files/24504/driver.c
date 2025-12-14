#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)46;
unsigned long long int var_3 = 1097484361900593235ULL;
signed char var_7 = (signed char)20;
unsigned int var_10 = 2567974642U;
int zero = 0;
signed char var_14 = (signed char)121;
unsigned long long int var_15 = 2382137787285058148ULL;
unsigned int var_16 = 719156618U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
