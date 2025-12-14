#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2472722719873631503ULL;
unsigned long long int var_3 = 16467970136356798117ULL;
unsigned long long int var_4 = 11730489220553589316ULL;
unsigned long long int var_5 = 8269730847129188752ULL;
unsigned long long int var_8 = 1849394684708103983ULL;
unsigned long long int var_10 = 3408232780540343887ULL;
unsigned long long int var_14 = 12933859546891610051ULL;
unsigned long long int var_15 = 13678368175285285098ULL;
unsigned long long int var_16 = 16303508132145259608ULL;
unsigned long long int var_17 = 8494382617835137288ULL;
unsigned long long int var_18 = 13115863199594730763ULL;
int zero = 0;
unsigned long long int var_20 = 16056381861595078741ULL;
unsigned long long int var_21 = 12837146301872305197ULL;
unsigned long long int var_22 = 12043379537189426544ULL;
unsigned long long int var_23 = 5567000471904033373ULL;
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
