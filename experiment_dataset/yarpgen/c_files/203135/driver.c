#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10967398787338949994ULL;
unsigned long long int var_6 = 18184473588573001679ULL;
unsigned long long int var_12 = 626798022846678515ULL;
int zero = 0;
unsigned long long int var_20 = 11333464790652139195ULL;
int var_21 = 2067814916;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
