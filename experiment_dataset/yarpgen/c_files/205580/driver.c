#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -737516739;
unsigned long long int var_5 = 12223623864484492039ULL;
long long int var_11 = -4088064508402626239LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 655251734;
unsigned short var_22 = (unsigned short)20037;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
