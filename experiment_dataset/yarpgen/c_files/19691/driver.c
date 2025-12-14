#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
unsigned long long int var_2 = 8508839791677627412ULL;
unsigned short var_4 = (unsigned short)25239;
_Bool var_8 = (_Bool)0;
long long int var_12 = -3065858155692844017LL;
int zero = 0;
long long int var_13 = 1232965429756124030LL;
short var_14 = (short)22228;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
