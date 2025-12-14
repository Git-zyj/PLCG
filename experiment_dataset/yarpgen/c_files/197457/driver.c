#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7557378290552009332LL;
signed char var_5 = (signed char)-56;
long long int var_9 = -8618635366005951391LL;
int zero = 0;
int var_16 = 1266765544;
signed char var_17 = (signed char)103;
int var_18 = 205247010;
unsigned long long int var_19 = 17767411989596063535ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
