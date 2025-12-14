#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10278202080960953680ULL;
long long int var_5 = 4843721807118590453LL;
unsigned char var_7 = (unsigned char)142;
int zero = 0;
long long int var_11 = 367233288059825236LL;
int var_12 = -1354108501;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
