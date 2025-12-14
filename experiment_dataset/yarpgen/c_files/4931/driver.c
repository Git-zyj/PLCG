#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)83;
long long int var_2 = 6040274318557952908LL;
long long int var_3 = -3391326220164416531LL;
signed char var_4 = (signed char)-56;
signed char var_7 = (signed char)83;
long long int var_13 = -2234460261751776951LL;
int zero = 0;
signed char var_17 = (signed char)66;
long long int var_18 = 7536350977076643883LL;
unsigned int var_19 = 3991180898U;
int var_20 = -1720119305;
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
