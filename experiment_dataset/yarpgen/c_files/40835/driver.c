#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3632307993336458283LL;
unsigned char var_6 = (unsigned char)114;
long long int var_11 = -4582460096955623108LL;
short var_12 = (short)27160;
int zero = 0;
unsigned long long int var_20 = 12583600606326281576ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2150135534U;
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
