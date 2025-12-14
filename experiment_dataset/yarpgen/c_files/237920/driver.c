#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)5721;
unsigned int var_8 = 1291257607U;
unsigned int var_16 = 3508010166U;
int zero = 0;
int var_17 = -1606300391;
unsigned int var_18 = 4148293793U;
int var_19 = -45251754;
long long int var_20 = 1311055465148861697LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
