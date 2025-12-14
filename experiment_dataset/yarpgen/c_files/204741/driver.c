#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1001880351;
int var_5 = 389555424;
_Bool var_8 = (_Bool)1;
int var_9 = 1637911790;
unsigned long long int var_10 = 167235369973261687ULL;
int zero = 0;
unsigned long long int var_11 = 14379503068920049097ULL;
unsigned int var_12 = 1356986842U;
short var_13 = (short)-30613;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
