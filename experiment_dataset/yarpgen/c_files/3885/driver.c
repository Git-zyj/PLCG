#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6812796207315247448ULL;
short var_1 = (short)-6546;
int var_2 = -1403246642;
unsigned int var_8 = 4255649776U;
short var_14 = (short)-1692;
int zero = 0;
int var_16 = -1917050735;
long long int var_17 = -695270172324239678LL;
unsigned long long int var_18 = 11664923976120922036ULL;
unsigned long long int var_19 = 769985309662724810ULL;
long long int var_20 = 1696563486485544644LL;
unsigned int var_21 = 3201272665U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
