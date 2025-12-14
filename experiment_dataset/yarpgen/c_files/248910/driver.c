#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-1468;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)107;
short var_14 = (short)-4458;
int zero = 0;
short var_20 = (short)-26748;
long long int var_21 = 4273625678456841436LL;
unsigned long long int var_22 = 17299626614862867540ULL;
signed char var_23 = (signed char)49;
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
