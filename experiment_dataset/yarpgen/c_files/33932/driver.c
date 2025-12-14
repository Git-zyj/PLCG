#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 964229315U;
signed char var_7 = (signed char)43;
_Bool var_11 = (_Bool)0;
long long int var_12 = -495470312884268835LL;
int zero = 0;
signed char var_13 = (signed char)-120;
short var_14 = (short)-4984;
unsigned long long int var_15 = 11995705598808438313ULL;
signed char var_16 = (signed char)103;
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
