#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
short var_3 = (short)-14124;
long long int var_6 = 6016498209846616907LL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2422933971U;
unsigned int var_9 = 3493317734U;
unsigned int var_10 = 209428173U;
int zero = 0;
unsigned int var_11 = 2573755206U;
signed char var_12 = (signed char)10;
long long int var_13 = -6666441070127619306LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
