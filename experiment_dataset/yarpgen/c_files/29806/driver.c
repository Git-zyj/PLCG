#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)63;
unsigned long long int var_2 = 3391285700416412005ULL;
signed char var_3 = (signed char)-120;
int var_7 = 2026086325;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_13 = 116476786;
signed char var_14 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
