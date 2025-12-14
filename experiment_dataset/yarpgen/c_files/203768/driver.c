#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17550738978762165634ULL;
short var_3 = (short)13084;
long long int var_7 = 1733439208746749579LL;
short var_8 = (short)17059;
short var_13 = (short)137;
int zero = 0;
short var_17 = (short)31770;
unsigned long long int var_18 = 3961877402961653981ULL;
unsigned int var_19 = 614747683U;
signed char var_20 = (signed char)-78;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
