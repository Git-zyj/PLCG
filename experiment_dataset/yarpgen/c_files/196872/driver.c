#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
short var_1 = (short)-9856;
short var_2 = (short)-22933;
unsigned long long int var_5 = 5865137501873712635ULL;
short var_7 = (short)-13187;
signed char var_10 = (signed char)46;
int var_11 = -125644359;
int zero = 0;
long long int var_12 = 5798822261619245150LL;
long long int var_13 = 8760619992293555720LL;
signed char var_14 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
