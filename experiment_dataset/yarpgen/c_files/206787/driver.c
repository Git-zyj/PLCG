#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3380401233326406542LL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -7525089744929672154LL;
signed char var_9 = (signed char)23;
_Bool var_12 = (_Bool)1;
short var_14 = (short)-5049;
long long int var_15 = 8342544651775407669LL;
unsigned int var_17 = 1621631958U;
signed char var_19 = (signed char)30;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
