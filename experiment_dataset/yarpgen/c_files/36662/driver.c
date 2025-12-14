#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 800246739588426552LL;
unsigned short var_7 = (unsigned short)45254;
int zero = 0;
unsigned short var_19 = (unsigned short)65466;
unsigned long long int var_20 = 16722203389757486616ULL;
unsigned long long int var_21 = 17565763631244695971ULL;
void init() {
}

void checksum() {
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
