#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9926;
unsigned short var_5 = (unsigned short)64566;
signed char var_10 = (signed char)110;
int zero = 0;
long long int var_17 = -8640919922232414803LL;
int var_18 = 1503894510;
int var_19 = -106175411;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
