#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1153918111;
unsigned long long int var_5 = 13101766624478708729ULL;
signed char var_12 = (signed char)63;
int zero = 0;
long long int var_19 = -4756498808582071823LL;
unsigned long long int var_20 = 9421451238105600223ULL;
void init() {
}

void checksum() {
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
