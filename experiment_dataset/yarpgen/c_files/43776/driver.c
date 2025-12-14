#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15318;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 3314795221838367051ULL;
short var_8 = (short)19042;
short var_9 = (short)-21364;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)24697;
short var_20 = (short)-6631;
unsigned int var_21 = 2868213416U;
void init() {
}

void checksum() {
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
