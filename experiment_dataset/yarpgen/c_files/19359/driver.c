#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3042784024U;
int var_1 = -2056841404;
unsigned int var_2 = 682824456U;
unsigned int var_6 = 733329599U;
unsigned int var_9 = 3537760635U;
long long int var_10 = 127322699039146635LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 15577415959610001216ULL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)8514;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
