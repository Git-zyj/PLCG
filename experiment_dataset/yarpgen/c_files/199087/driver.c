#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
_Bool var_2 = (_Bool)1;
short var_3 = (short)6757;
long long int var_6 = 5151376969491636045LL;
long long int var_10 = 1659348227185000972LL;
int zero = 0;
unsigned long long int var_11 = 16924219448071165800ULL;
signed char var_12 = (signed char)-111;
short var_13 = (short)9179;
short var_14 = (short)-3528;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
