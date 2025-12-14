#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8826130678319069189ULL;
unsigned short var_2 = (unsigned short)205;
unsigned long long int var_6 = 10173386746268829725ULL;
signed char var_10 = (signed char)-123;
int zero = 0;
long long int var_11 = -7490553396711221053LL;
long long int var_12 = 4472034082423068864LL;
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
