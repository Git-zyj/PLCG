#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-68;
signed char var_2 = (signed char)-25;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)5;
int var_5 = -697740933;
signed char var_9 = (signed char)-78;
signed char var_11 = (signed char)-78;
int zero = 0;
long long int var_13 = -2124005758941854325LL;
unsigned long long int var_14 = 13515935704677985603ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
