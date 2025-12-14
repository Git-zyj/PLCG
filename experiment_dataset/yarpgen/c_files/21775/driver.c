#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4736257483629643651LL;
long long int var_6 = -4376385054198377334LL;
long long int var_7 = 1016565719879363014LL;
int zero = 0;
unsigned int var_12 = 3997954376U;
unsigned short var_13 = (unsigned short)37462;
_Bool var_14 = (_Bool)1;
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
