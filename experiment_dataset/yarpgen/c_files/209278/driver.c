#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -38673916;
long long int var_2 = 1669953542362354814LL;
signed char var_9 = (signed char)64;
int zero = 0;
unsigned short var_18 = (unsigned short)38700;
unsigned short var_19 = (unsigned short)62111;
signed char var_20 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
