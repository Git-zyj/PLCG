#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19340;
long long int var_5 = 2150323438789373580LL;
signed char var_7 = (signed char)39;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_12 = 1817949287;
long long int var_13 = -6474186584690111917LL;
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
