#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-54;
signed char var_5 = (signed char)94;
int var_7 = -1704846820;
long long int var_10 = 2458556522338183288LL;
short var_11 = (short)21855;
signed char var_12 = (signed char)61;
signed char var_14 = (signed char)(-127 - 1);
int var_16 = -685328442;
int zero = 0;
short var_20 = (short)2050;
unsigned long long int var_21 = 16775517629863163739ULL;
unsigned int var_22 = 2192838761U;
int var_23 = 974540544;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
