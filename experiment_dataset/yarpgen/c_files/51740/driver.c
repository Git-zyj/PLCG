#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2164346901890172346LL;
_Bool var_9 = (_Bool)1;
short var_12 = (short)-3694;
int zero = 0;
unsigned int var_13 = 143608205U;
signed char var_14 = (signed char)-118;
unsigned int var_15 = 3708727189U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
