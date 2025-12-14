#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1550131900740966468ULL;
short var_8 = (short)-23177;
signed char var_10 = (signed char)112;
signed char var_17 = (signed char)20;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)78;
long long int var_20 = 8429758808054869987LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
