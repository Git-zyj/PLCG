#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23552;
unsigned int var_3 = 2175842312U;
short var_4 = (short)21004;
unsigned long long int var_7 = 11624070063573695064ULL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = 4521490506394505829LL;
short var_11 = (short)18647;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
