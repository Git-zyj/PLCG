#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5801;
_Bool var_2 = (_Bool)0;
long long int var_3 = 3054261027050097467LL;
int var_6 = 1461127266;
unsigned long long int var_14 = 11296421071436859037ULL;
int zero = 0;
int var_15 = 1564677857;
short var_16 = (short)14736;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
