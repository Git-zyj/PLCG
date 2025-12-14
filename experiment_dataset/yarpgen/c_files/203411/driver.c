#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28861;
long long int var_7 = -6410893757335878932LL;
_Bool var_9 = (_Bool)1;
int var_10 = 192837366;
unsigned char var_16 = (unsigned char)244;
unsigned long long int var_17 = 16923864794809038739ULL;
long long int var_18 = 6787993948345889283LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 18154893772355644404ULL;
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
