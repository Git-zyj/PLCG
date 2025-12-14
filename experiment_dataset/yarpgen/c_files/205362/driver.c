#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11927590562124007925ULL;
unsigned long long int var_7 = 4605116375780286446ULL;
int zero = 0;
long long int var_18 = -803709304501358623LL;
short var_19 = (short)19763;
unsigned long long int var_20 = 12479903810332434724ULL;
int var_21 = 1567315028;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
