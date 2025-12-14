#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_19 = 18376833165735533786ULL;
int zero = 0;
unsigned long long int var_20 = 6368279080401398067ULL;
unsigned long long int var_21 = 14465384104341674973ULL;
unsigned long long int var_22 = 11753572958055893902ULL;
unsigned long long int var_23 = 9070984188094344123ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
