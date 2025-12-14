#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52711;
short var_7 = (short)12923;
unsigned long long int var_9 = 2793571600189830155ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 17534701560138444893ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
