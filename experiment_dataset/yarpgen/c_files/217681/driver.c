#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8481447106138361915LL;
unsigned int var_4 = 1623249500U;
unsigned char var_5 = (unsigned char)71;
unsigned int var_6 = 311526689U;
unsigned int var_7 = 3221058452U;
signed char var_8 = (signed char)91;
unsigned char var_12 = (unsigned char)113;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 13712995107917439403ULL;
long long int var_18 = -6174687796300474061LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
