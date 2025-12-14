#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2845172129U;
unsigned int var_9 = 3679779571U;
long long int var_10 = 1644691573541622318LL;
_Bool var_12 = (_Bool)0;
unsigned short var_17 = (unsigned short)1059;
int zero = 0;
short var_20 = (short)28032;
unsigned long long int var_21 = 12899431848715618614ULL;
unsigned int var_22 = 1853119467U;
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
