#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8154042650279876390LL;
unsigned short var_8 = (unsigned short)19939;
short var_10 = (short)-1217;
int zero = 0;
signed char var_12 = (signed char)-94;
unsigned long long int var_13 = 11791857540629323436ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
