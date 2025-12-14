#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -972417934234511365LL;
unsigned long long int var_3 = 12206208848903142302ULL;
unsigned int var_7 = 669759057U;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 341822717445116858ULL;
unsigned int var_13 = 4208083461U;
signed char var_14 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
